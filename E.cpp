#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = 1, h = 1;

        if (n == k) {
            for (int i = 0; i < n; i++) cout << "-";
            cout << "\n";
            continue;
        }

        for (char c : s) {
            if (c == '0') {
                l++;
                h++;
            } 
            else if (c == '2') {
                h++;
            }
        }

        int m = n - k;
        int a = h;
        int b = l + m - 1;

        vector<char> x;
        for (int i = 1; i <= n; i++) {
            if (a <= i && i <= b) {
                x.push_back('+');
            } 
            else if (i < l || i > h + m - 1) {
                x.push_back('-');
            } 
            else {
                x.push_back('?');
            }
        }

        for (char c : x) cout << c;
        cout << "\n";
    }

    return 0;
}
