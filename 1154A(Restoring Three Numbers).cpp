#include<bits/stdc++.h>
using namespace std;
 
int main(){
  vector<int>v(4);
  for(int i=0;i<4;i++){
    cin>>v[i];
  }
  int maxele=*max_element(v.begin(),v.end());
  erase(v,maxele);
  int a=maxele-v[0];
  int b=maxele-v[1];
  int c=maxele-v[2];
  cout<<a<<' '<<b<<' '<<c;
  return 0;
}
