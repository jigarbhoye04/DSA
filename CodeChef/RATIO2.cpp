#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    void solve() {
        int X, Y;
        cin>>X>>Y;
        int ops = 0;

        if (X >= 2 * Y || Y >= 2 * X) {
            ops=0;
        } else {
            int diff1 = (2 *Y-X+1)/2;
            int diff2 = (2 *X-Y+1)/2;
            ops = min(diff1, diff2);
        }

        cout<<ops<<endl;
    }
};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int t;
    cin >> t;
    while (t--) {
        obj.solve();
    }
    return 0;
}