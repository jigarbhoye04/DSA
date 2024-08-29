#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //int n= nums.size();
        // int lo1=0,lo2=0,hi=0;
        // int sum1=0,sum2=0;
        // int cnt=0;

        // while(hi<n){
        //     sum1+=nums[hi];
        //     sum2+=nums[hi];

        //     while(lo1<=hi && sum1 > goal){
        //         sum1 -= nums[lo1];
        //         lo1++;
        //     }
        //     while(lo2<=hi && sum2 >= goal){
        //         sum2 -= nums[lo2];
        //         lo2++;
        //     }
        //     cnt += lo2-lo1;
        //     hi++;
        // }

        return solve(nums,goal)-solve(nums,goal-1);
    }


    //more straight forward solution
    int solve(vector<int>& nums, int goal){
        int n= nums.size();
        int lo=0,hi=0,cnt=0,sum=0;
        if(goal<0){
            return 0;
        }

        while(hi<n){
            sum += nums[hi];

            while(sum>goal){
                sum -= nums[lo];
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