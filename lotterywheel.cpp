#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int l,a,b;
        cin >>l>>a>>b;
        int k=(a+b)%l;
        vector<int>nums;
        nums.push_back(a);
        while(k!=a){
            nums.push_back(k);
            k=(k+b)%l;
        }
        int maxi=*max_element(nums.begin(),nums.end());
        cout <<maxi<<endl;
    }
}