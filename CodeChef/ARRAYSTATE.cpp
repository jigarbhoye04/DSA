
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void solve() {
        int n, k;
        cin>>n>>k;
        multiset<int>ms;
        for(int i =0;i<n;++i) {
            int x;
            cin>>x;
            ms.insert(x);
        }

        for(int i=0;i<k;++i) {
            auto min_it=ms.begin();
            auto max_it=prev(ms.end());
            int min_val=*min_it;
            int max_val=*max_it;
            ms.erase(min_it);
            ms.erase(max_it);
            ms.insert(min_val + max_val);
        }

        for (auto it =ms.begin(); it!=ms.end();++it) {
            cout<< *it<<" ";
        }
        cout << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int T;
    cin >> T;
    while (T--) {
        obj.solve();
    }
    return 0;
}