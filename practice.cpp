#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.erase(a.begin());
    cout << a[0]<<endl;
    cout << a.size();

}