#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, count = 0;
        cin>>n;
        string s;
        getline(cin,s);

        if(n==2 && s[0]==s[1]){
            cout<<count;
            continue;
        }

        for(int i = n - 1;i >= 0;i--){
            if(s[i] != s[i-1]){
                s[i-1] = s[i];
                count++;
            }
        }

        cout<<count;
    }

    return 0;
}