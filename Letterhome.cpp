#include <iostream>
#include<cmath>
using namespace std;
int main(){
    long int t;
    cin >> t;
    for(int j=0;j<t;j++){
        long long n,s;
        cin >> n >> s;
        long long ar[n];
        for(int i=0;i<n;i++){
            cin >> ar[i];
        }
        if (s<=ar[0]) {
            cout << ar[n-1]-s <<endl;
        }
        else if(s>=ar[n-1]){
            cout << s-ar[0] <<endl;
        }
        else{
            cout << min(abs(s-2*ar[0]+ar[n-1]),abs(2*ar[n-1]-ar[0]-s)) <<endl;
        }
    }
    return 0;
}