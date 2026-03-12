#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int win=n;int lose=0;int matches=0;
        while(1){
            if(win==1 && lose==1){
                matches+=1;
                cout << matches<<endl;
                break;
            }
            else if(win==1 && lose!=1){
                matches+=lose/2;
                lose-=lose/2;
            }
            else{
                matches+=win/2 + lose/2;
                lose+=(win/2)-(lose/2);
                win-=win/2;
            }
        } 
    }
    return 0;
}