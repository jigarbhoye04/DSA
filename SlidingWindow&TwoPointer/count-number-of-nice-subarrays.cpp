#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }

    int solve(vector<int>& nums, int k){
        int lo=0,hi=0,sum=0,cnt=0,n=nums.size();
        if(k<0){
            return 0;
        }

        while(hi<n){
            sum += nums[hi]%2;

            while(sum>k){
                sum -= nums[lo]%2;
                lo++;
            }
            cnt += hi-lo+1;
            hi++;
        }

        return cnt;
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    return 0;
}