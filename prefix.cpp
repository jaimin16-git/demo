#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a;
        int k;
        for(int i=0;i<n;i++){
            cin >> k;
            a.push_back(k);
        }
        int max=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>max) max=a[i];
        }
        cout << max*n <<endl;
    }
}