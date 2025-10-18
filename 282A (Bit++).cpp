//Solution 1(Use C++23 for contains())

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
   
    int x = 0;
    string s;
   
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.contains('+'))  x++;
        else if(s.contains('-'))  x--;
    }
   
    cout<<x;

    return 0;
} 

//Solution 2

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
   
    int x = 0;
    string s;
   
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.find('+')!=string::npos)  x++;
        else if(s.find('-')!=string::npos)  x--;
    }
   
    cout<<x;

    return 0;
}