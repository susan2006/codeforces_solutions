#include<iostream>
#include<climits>
using namespace std;
 
int main(){
  int t;
  cin>>t;
  
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    int max = 0, min = INT_MAX;
    for(int i=0;i<n;i++){
      if(arr[i] > max){
        max=arr[i];
      }
      if(arr[i]<min){
        min=arr[i];
      }
    }
    int k = (max-min) + 1;
    
    cout<<k<<"\n";
  }
  return 0;
}
