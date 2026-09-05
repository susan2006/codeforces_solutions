#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
void solve() {
    vector<int> tokens(3);
    cin >> tokens[0] >> tokens[1] >> tokens[2];
    
    int rounds = 0;
    
    while (true) {
        sort(tokens.begin(), tokens.end());
        
        if (tokens[0] == tokens[1] || tokens[1] == tokens[2]) {
            break;
        }
        
        tokens[2] -= 1;
        tokens[0] += 1;
        rounds++;
    }
    
    cout << rounds << '\n';
}
 
int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
