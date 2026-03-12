#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long x;
        int y,a;
        y=9;
        cin >> x;
        while(x>0){
            a=x%10;
            x=x/10;
            if(a<y) y=a;
        }
        cout << y << endl;
    }
return 0;
}