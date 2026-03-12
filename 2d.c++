#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<int> y1(n), x1(m);
        for (int i = 0; i < n; i++) {
            cin >> y1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> x1[i];
        }
        int count1 = 0, count2 = 0;
        for (int i = 0; i < m; i++) {
            if (x > x1[i]) {
                count1++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (y > y1[i]) {
                count2++;
            }
        }
        cout << (count1 + count2) << "\n";
    }
    return 0;
}
