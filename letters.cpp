#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;
    
    vector<long long> a(n), b(m), pref(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        pref[i] = a[i] + (i ? pref[i-1] : 0);
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
        // Find dorm using binary search
        int dorm = lower_bound(pref.begin(), pref.end(), b[i]) - pref.begin();
        long long room = b[i] - (dorm ? pref[dorm-1] : 0);
        cout << dorm + 1 << " " << room << "\n";
    }
    
    return 0;
}