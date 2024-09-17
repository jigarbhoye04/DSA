#include <bits/stdc++.h>
using namespace std;

// #define int long long

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n = bloomDay.size();
        if(m*1ll*k*1ll > n){
            return -1;
        }
        int lo=0,hi=0;
        for(int i=0;i<n;i++){
            hi = max(hi,bloomDay[i]);
            lo = min(lo,bloomDay[i]);
        }
        int ans = hi;

        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(possible(bloomDay,m,k,mid)){
                // ans = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return lo;
    }

    bool possible(vector<int>& nums, int m ,int k,int mid){
        int cnt =0;
        int boq = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=mid){
                cnt++;
            }else{
                boq += cnt/k;
                cnt =0;
            }
        }
        boq += cnt/k;

        return boq >= m;
    }
};

int main()
{
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;
    Solution obj;
    int ans = obj.minDays(arr, k, m);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}

