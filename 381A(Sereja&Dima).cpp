#include<iostream>
int main(){
  int n;
  std::cin>>n;
  
  int arr[n];
  for(int i=0;i<n;i++){
    std::cin>>arr[i];
  }
  int l=0,r=n-1;
  int s=0,d=0;
  bool s_turn =true;
  while(l<=r){
    int max;
    if(arr[l]>arr[r]){
      max=arr[l++];
    }else{
      max=arr[r--];
    }
    if(s_turn){
      s+=max;
      s_turn=false;
    }else{
      d+=max;
      s_turn=true;
    }
  }
  std::cout<<s<<" "<<d<<'\n';
  return 0;
}
