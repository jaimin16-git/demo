#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        long long n;
        cin >> n;
        long double ar[n];
        int y=0;
        for(int j=0;j<n;j++){
            cin >> ar[j];
        }
        for (int k=0;k<n;k++){
            for(int m=0;m<n;m++){
                if (m!=k && ar[m]==ar[k]){
                    y=1;
                    break;
                }
            }
        }
        if (y==1) cout <<"YES"<<endl;
        else cout<<"NO"<<endl;
}
return 0;
}
    
    