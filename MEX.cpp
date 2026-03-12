#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        int p;
        cin >> p;

        int a[3005];
        for (int i=0;i<p;i++) {
            cin >> a[i];
        }
        sort(a,a+p);
        int ans=0;
        for (int start= 0;start<p;start++) {
            int mex=0;
            int base=a[start];

            for (int i=start;i<p;i++) {
                int val=a[i]-base;
                if (val<mex) continue;
                else if (val==mex) mex++;
                else break;
            }
            ans=max(ans,mex);
        }
        cout << ans << endl;
    }
    return 0;
}