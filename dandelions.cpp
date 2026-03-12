#include <bits/stdc++.h>
using namespace std;
int main(){
    long int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long > a;
        long long p;
        for(long long i=0;i<n;i++){
            cin >> p;
            a.push_back(p);
        }
        vector<long long > odd;
        vector<long long > even;
        for(long long i=0;i<a.size();i++){
            if(a.at(i)%2!=0) odd.push_back(a.at(i));
            else even.push_back(a.at(i)); 
        }
        int odd_no=odd.size();
        sort(odd.begin(), odd.end(), greater<long long>());
        if(odd_no==0) cout<<0<<endl;
        else{
            int m=0;
            long long cut=0;
            int f=0;
            int b=odd_no-1;
            int k=0;
            while(f<=b){
                if(m==0){
                    k=1;
                    cut+=odd[f++]; 
                }
                else{
                    k=0;
                    b--;
                }
                m=k;
            }
            for(long long d:even){
                cut+=d;
            }
            cout <<cut<<endl;
        }
    }
}