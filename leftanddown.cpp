#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,k;
        cin >> a>>b>>k;
        if(k>=a && k>=b) cout << 1<<endl;
        else{
            long long x=gcd(a,b);
            if(a/x<=k && b/x<=k) cout << 1<<endl;
            else{
                cout << 2<<endl;
            }
        }
    }
}