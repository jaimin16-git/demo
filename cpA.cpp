#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long n,x,y,z;
        cin >> n;
        if(n<=6) cout << "NO"<<endl;
        else{
            if(n%3==1 || n%3==0){
                x=1;y=4;
                z=n-x-y;
                if (x!=z && y!=z && x+y+z==n) cout << "YES" <<endl<<x<<" "<<y<<" "<<z<<endl;
                else cout<<"NO"<<endl;
            }
            else if(n%3==2){
                x=1;y=2;
                z=n-x-y;
                if (x!=z && y!=z && x+y+z==n) cout<<"YES"<<endl<<x<<" "<< y<<" "<<z<<endl;
                else cout<<"NO"<<endl;
            }    
        }  
    } 
    return 0;
}
