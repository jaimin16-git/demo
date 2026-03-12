#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n,m;
        int h;
        cin >> n >> m >> h;
        vector<int>ori;
        vector<int>dup;
        int k;
        for(int i=0;i<n;i++){
            cin >> k;
            ori.push_back(k);
            dup.push_back(k);
        }
        int b;
        int c;
        vector<int>index;
        for(int i=0;i<m;i++){
            cin >> b >> c;
            dup.at(b-1)+=c;
            index.push_back(b-1);
            if(dup.at(b-1)>h){
                for(int p=0;p<index.size();p++){
                    dup[index.at(p)]=ori[index.at(p)];
                }
                index.clear();
            }
        }
        for(long int i=0;i<n;i++){
            cout << dup.at(i)<< " ";
        }
        cout << endl;
    }
}