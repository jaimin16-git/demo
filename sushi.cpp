#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m = 0;
    for(int i = 0; i < n; ){
        int c1 = 0, c2 = 0;
        int j = i;
        while(j < n && a[j] == a[i]){
            c1++;
            j++;
        }
        int k = j;
        while(k < n && a[k] == a[j]){
            c2++;
            k++;
        }
        m = max(m, 2 * min(c1, c2));
        i = j;
    }
    cout << m << endl;
}