#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.find('*') != string::npos) {
            cout << -1 << "\n";
            continue;
        }

        int n = s.size();
        int left = 0, right = 0;

        while (left < n && s[left] == '>') left++;
        
        while (right < n && s[n - 1 - right] == '<') right++;

        cout << max(left, right) << "\n";
    }

    return 0;
}
