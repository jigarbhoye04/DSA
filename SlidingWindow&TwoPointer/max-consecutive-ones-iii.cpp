//LC: https://leetcode.com/problems/max-consecutive-ones-iii/

#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:

    //silding window approach
    //TC: O(n)^2
    //SC: O(1)
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int lo=0,hi=0,maxlen=0;
        int zeroes=0;

        while(hi<n){
            if(nums[hi]==0){
                zeroes++;
            }

            while(zeroes>k){
                if(nums[lo]==0){
                    zeroes--;
                }
                lo++;
            }

            if(zeroes<=k){
                int len = hi-lo+1;
                maxlen= max (maxlen,len);
            }

            hi++;
        }
        return maxlen;
    }

    //optimal approach
    
};

class Optimal {
public:
    //TC: O(n)
    //SC: O(1)
    int longestOnes(vector<int>& nums, int k) {
        int lo=0,hi=0,n=nums.size(),maxlen=0,zeroes=0;

        while(hi<n){
            if(nums[hi]==0){
                zeroes++;
            }
            if(zeroes>k){
                if(nums[lo]==0) zeroes--;
                lo++;
            }
            if(zeroes<=k){
                int len = hi-lo+1;
                maxlen = max(maxlen,len);
            }

            hi++;
        }
    return maxlen;
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    return 0;
}