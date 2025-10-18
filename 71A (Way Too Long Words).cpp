//Solution 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    string s[n];
   
    for(int i = 0; i < n; i++){
        cin>> s[i];
    }
   
    for(string st : s){
        if(st.length() > 10)  cout<<st[0]<<(st.length() - 2)<<st[st.length()]<<"\n";
        else cout<<st<<"\n";
    }
return 0;
}

//olution 2

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    string s[n];
   
    for(int i = 0; i < n; i++){
        cin>> s[i];
    }
   
    for(string st : s){
        if(st.length() > 10)  cout<<st[0]<<(st.length() - 2)<<st[st.length() - 1]<<"\n";
        else cout<<st<<"\n";
    }
return 0;
}