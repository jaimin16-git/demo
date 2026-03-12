#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k;
        int even=0;int odd=0;
        for(int i=0;i<n;i++){
            cin >> k;
            if(k%2==0) even+=k;
            else odd+=k;
        }
        if(even>odd) cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
}