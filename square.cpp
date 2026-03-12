#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    long int a,b,c,d;
    for(int i=0;i<t;i++){
        cin >> a >> b >> c >> d;
    if (a==b && a==c && a==d) cout << "YES"<< endl;
    else cout << "NO"<< endl;
    }
    return 0;
}