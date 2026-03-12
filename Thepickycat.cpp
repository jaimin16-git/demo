#include <bits/stc++.h>
using namespace std; 
int main(){
    long int t;
    cin >> t;
    for(long int i=0;i<t;i++){
        long long n;
        cin >> n;
        long long a[n];
        for(int j=0;j<n;j++){
            cin >> a[i];
        }
        long long x=min_element(a,a+n);
        long long y= n/2 + n%2;
        
    }
}