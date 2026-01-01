#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l, a, b;
        cin >> l >> a >> b;
        int max = (a + (a * b)) % l;
        cout << max << "\n";
    }
    return 0;
}
