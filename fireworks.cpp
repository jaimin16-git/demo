#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,m;
        cin >> a>>b>>m;
        long long count=(m/a)+(m/b);
        cout << count+2<<endl;
    }
}