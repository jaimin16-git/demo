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

        vector<long long> a(n), b(k);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < k; i++) cin >> b[i];
        sort(a.begin(), a.end(), greater<long long>());
        sort(b.begin(), b.end());
        int i = 0;
        long long cost = 0;
        for (long long x : b) {
            if (i + x > n) break;

            for (int j = 0; j < x - 1; j++) {
                cost += a[i];
                i++;
            }
            i++; 
        }
        while (i < n) {
            cost += a[i];
            i++;
        }
        cout << cost << "\n";
    }
    return 0;
}
