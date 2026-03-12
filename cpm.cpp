#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(long long k=0;k<t;k++){
        long long n;
        long long moves=0;
        cin >> n;
        long long mid = (n+1)/2;
        for (long long i=1;i<mid;i++){
            moves += i*8*i;
            }
        cout << moves << endl;
        }
        return 0;   
}