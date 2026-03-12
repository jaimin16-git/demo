#include<iostream>
#include<vector>

using namespace std;

int main(){
    int p;
    cin >> p;
    for(int i=0;i<p;i++){
        int n;
        cin >> n;
        int x[n];
        for(int i=0;i<n;i++){
            cin >> x[i];
        }
        int b = 0;
        if(x[0]%2 == 0){
            for(int i=1;i<n;i++){
                if(i%2 == 0){
                    if(x[i]%2 == 0) b= 1;
                    else{
                        b = 0;
                        break;
                    }
                }
                else{
                    if(x[i]%2 != 0) b= 1;
                    else{
                        b= 0;
                        break;
                    }
                }
            }
        }
        else{
            for(int i=1;i<n;i++){
                if(i%2 == 0){
                    if(x[i]%2 != 0) b = 1;
                    else{
                        b= 0;
                        break;
                    }
                }
                else{
                    if(x[i]%2 == 0) b = 1;
                    else{
                        b = 0;
                        break;
                    }
                }

            }
        }
        if(b == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}