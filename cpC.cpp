#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    vector<int> d1, k1, l1, m1, n1, sum, dp;

    for (int i = 1; i <= d; i++) {
        d1.push_back(i);
    }

    for (int p = k; p <= d; p += k) {
        k1.push_back(d1[p - 1]);
    }
    for (int q = l; q <= d; q += l) {
        l1.push_back(d1[q - 1]);
    }
    for (int r = m; r <= d; r += m) {
        m1.push_back(d1[r - 1]);
    }
    for (int s = n; s <= d; s += n) {
        n1.push_back(d1[s - 1]);
    }

    // Concatenate arrays
    sum.insert(sum.end(), k1.begin(), k1.end());
    sum.insert(sum.end(), l1.begin(), l1.end());
    sum.insert(sum.end(), m1.begin(), m1.end());
    sum.insert(sum.end(), n1.begin(), n1.end());

    // Remove duplicates
    for (size_t i = 0; i < sum.size(); i++) {
        bool found = false;
        for (size_t j = 0; j < dp.size(); j++) {
            if (sum[i] == dp[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            dp.push_back(sum[i]);
        }
    }

    cout << dp.size() << endl;
    return 0;
}