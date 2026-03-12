#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long >a;
    long long k;
    for(int i=0;i<n;i++){
        cin >> k;
        a.push_back(k);
    }
    long long s=0;
    long long x=LLONG_MAX;
    for(int i=n-1;i>=0;i--){
        x=min(x-1,a[i]);
        if(x<0) x=0;
        s+=x;
    }
    cout << s<<endl;
}