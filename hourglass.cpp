#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long s,k,m;
        cin >> s >> k >> m;
        long long lf = (m / k) * k;
        long long r = s - (m - lf);
        if(m < s) r = s - m;
        if(r < 0) r = 0;
        cout << r << "\n";
    }
    return 0;
}