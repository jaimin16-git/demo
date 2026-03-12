#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a,b;
    int x,y;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        a.push_back(x);b.push_back(y);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0;int j=0;
    int p=0;int ans=0;
    vector<int>pass;
    while(i!=n && j!=n){
        if(a[i]<b[j]) {
            p++;
            ans=max(ans,p);
            i++;
        }
        else {
            p--;
            j++;
        }
    }
    cout<<ans<<endl;
}