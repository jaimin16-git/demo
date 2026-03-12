#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int total=0;
        for(int i=0;i<n-1;i++){
            total+=abs(a[i+1]-a[i]);
        }
        int ans=total;
        for(int index=0;index<n;index++){
            int sum=total;
            if(index>0)
                sum-=abs(a[index]-a[index-1]);
            if(index<n-1)
                sum-=abs(a[index+1]-a[index]);
            if(index>0&&index<n-1)
                sum+=abs(a[index+1]-a[index-1]);
            ans=min(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}