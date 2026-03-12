#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x--){
        int k;
        cin >> k;
        if(k==2 || k==3) cout << k<<endl;
        else if(k%2==0) cout <<0<<endl;
        else cout <<1<<endl;
    }
}
