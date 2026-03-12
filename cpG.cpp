#include <iostream>
#include <vector>
using namespace std;

bool isPowerOfTwo(long long n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int t;
    cin >> t;

    vector<string> results;
    results.reserve(t); // reserve space for efficiency

    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;

        if (n == 1) {
            results.push_back("NO");
        } else if (isPowerOfTwo(n)) {
            results.push_back("NO");
        } else {
            results.push_back("YES");
        }
    }

    // print results after processing all inputs
    for (const string &res : results) {
        cout << res << endl;
    }

    return 0;
}
