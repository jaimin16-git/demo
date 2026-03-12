#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a;
    int k;
    for(int i=0;i<n;i++){
        cin >> k;
        a.push_back(k);
    }
    int s=a[n-1];
    int x=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(x==0) break;
        if(x-1 <= a[i]) {
            s+=x-1;
            x=(x-1);
        }
        else if(x-1 > a[i]) {
            s+=a[i];
            x=a[i];
        }
    }
    cout << s<<endl;
}