#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,x;
        cin >> n >> s >> x;
        int k;
        int sum=0;
        for(int i=0;i<n;i++){
            cin >> k;
            sum+=k;
        }
        while(true){
            if(sum==s){
                cout <<"YES"<<endl;
                break;
            }
            else if(sum>s){
                cout << "NO" << endl;
                break;
            }
            sum+=x;
        }

    }
    return 0;
}