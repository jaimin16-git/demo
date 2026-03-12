#include <iostream>

using namespace std;

int main(){

    int W{};
    cin >> W;

    
    if(W%2 !=0 || W <= 2)
        cout <<"No\n";
    else if (W%2 ==0)
        cout <<"Yes\n";
    return 0;
}