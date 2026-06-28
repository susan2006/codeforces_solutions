#include<bits/stdc++.h>
using namespace std;
int main(){
  int k,n,w;
  cin>>k>>n>>w;
  int sum=(w*(w+1)) / 2;
  int res=(sum*k);
  cout<<((n>res)?0:(res-n));
  return 0;
}