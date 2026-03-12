#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n), prefSum(n), prefMax(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            prefSum[i] = a[i] + (i ? prefSum[i - 1] : 0);
            prefMax[i] = max(a[i], (i ? prefMax[i - 1] : 0LL));
        }
        while (q--) {
            long long k;
            cin >> k;
            int p = upper_bound(prefMax.begin(), prefMax.end(), k) - prefMax.begin() - 1;
            if (p < 0)
                cout << 0 << " ";
            else
                cout << prefSum[p] << " ";
        }
        cout << '\n';
    }
    return 0;
}