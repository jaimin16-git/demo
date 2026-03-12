#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int k=a[0];
        for(int x:a){
            k=gcd(x,k);
        }
        int y=*max_element(a.begin(),a.end());
        cout<< y/k<<endl;
    }
}