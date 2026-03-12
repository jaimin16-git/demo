#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        vector<int> index;
        for(int j = 0; j < n; j++){
            if(s[j] == '1') index.push_back(j);
        }
        int i = index.size();
        vector<int> gaps;

        for(int j = 0; j < i - 1; j++){
            gaps.push_back(index[j+1] - index[j] - 1);
        }

        gaps.push_back(n - index[i-1] + index[0] - 1);

        cout << *max_element(gaps.begin(), gaps.end()) << endl;
    }
    return 0;
}
