#include <bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin >> t;
    for(long i=0;i<t;i++){
        int a,b,c,d,z;
        z=0;
        cin >> a>> b>> c>> d;
        int x=min(a,b);
        int y=max(a,b);
        while(x!=y){
            if(x==c || x==d) {
                z=z+1;
            }
            x++;
        }
        if(z==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
    return 0;
}
