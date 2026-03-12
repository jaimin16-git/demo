#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        int time=1;long long x=n/2+n%2;long long y=n/2;
        while(x!=k || y!=k){
            x=x/2+x%2;
            y=y/2;
            time+=1;
        }

    }
}