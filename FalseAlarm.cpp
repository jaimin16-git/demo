#include <iostream>
using namespace std;
int main(){
    long t;
    cin >> t;
    for (int i=0;i<t;i++){
        int n,x;
        cin >> n >> x;
        int ar[n];
        int y=0;
        for(int j=0;j<n;j++){
            cin >> ar[j];
        }
        for(int k=0;k<n;k++){
            if (ar[k]==1 && x==0) {
                y=1;
                break;}
            else if(ar[k]==1 && x>0 && k+x<n){
                k=k+x-1;
                x=0;
            }
        }
        if (y==1) cout<<"NO"<<endl;
        else cout << "YES"<<endl;
    }
    return 0;
}