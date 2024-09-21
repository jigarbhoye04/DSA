#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int n;
        cin>>n;
        vector<int>nums(n);
        unordered_map<int, int> freq;
        int zeroCount = 0;
        for(int i=0;i<n;++i){
            cin>>nums[i];
            if (nums[i] == 0) {
                zeroCount++;
            } else {
                freq[nums[i]]++;
            }
        }
        int maxFreq = 0;
        for (const auto& entry : freq) {
            maxFreq = max(maxFreq, entry.second);
        }
//         for (auto &ent : freq) {
//             int f = ent.second;
//             maxP += f * (f - 1) / 2;
//         }
        int maxP = 0;
        for(auto &it:freq){
            int f = it.second;
            maxP+= f*(f-1)/2;
        }

        maxP = maxP-(maxFreq*(maxFreq - 1))/2;
        maxFreq += zeroCount;
        maxP = maxP+(maxFreq*(maxFreq - 1))/2;

        cout<<maxP<<endl;
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