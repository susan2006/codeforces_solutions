#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    vector<int> score(n);
    for(int i = 0;i < n;i++){
        cin>>score[i];
    }

    int kthElement = score[k - 1];
    int count = 0;

    for(int i = 0;i < n;i++){
        if(score[i] == 0){
            break;
        }  
        else if(score[i] >= kthElement){
            count++;
        }
        else{
            break;
        } 
    }

    cout<<count<<"\n";
    return 0;
}