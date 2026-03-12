#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        long long n, m;
        cin >> n >> m;
        long long b[210];
        for (int j = 0; j < m; j++) {
            cin >> b[j];
        }
        long long a = 0;
        if (m == 1) {
            if (b[0]<=n) {
                a = n-b[0]+1;
            } else {
                a=0;
            }
        } else {
            int c=1;
            for (int j = 1; j < m; j++) {
                if (b[j] != b[j-1] + 1) {
                    c = 0;
                    break;
                }
            }
            if (c==1) {
                if (b[m-1] <= n) {
                    a = n-b[m-1] + 1;
                } else {
                    a=0;
                }
            } else {
                a=1;
            }
        }
        cout <<a<<endl;
    }
    return 0;
}