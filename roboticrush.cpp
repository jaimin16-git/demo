#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n,m,k;
        cin >> n >> m >> k;

        vector<long long> r(n);
        vector<long long> s(m);

        for(int i=0;i<n;i++){
            cin >> r[i];
        }

        for(int i=0;i<m;i++){
            cin >> s[i];
        }

        string gdCode;
        cin >> gdCode;

        sort(r.begin(), r.end());
        sort(s.begin(), s.end());

        set<long long> alive(r.begin(), r.end());

        long long shift = 0;
        int spikeIndex = 0;

        for(int i=0;i<k;i++){
            if(gdCode[i] == 'L')
                shift--;
            else
                shift++;

            while(spikeIndex < m && !alive.empty()){
                long long need = s[spikeIndex] - shift;

                auto it = alive.lower_bound(need);

                if(it != alive.end() && *it == need){
                    alive.erase(it);
                    spikeIndex++;
                } else {
                    break;
                }
            }

            cout << alive.size() << " ";
        }

        cout << endl;
    }
}
