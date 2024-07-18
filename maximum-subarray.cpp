#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int KadaneAlgo(vector<int>& nums){
        int max_sum=0,cur_sum=0;

        for(int i=0;i<nums.size();i++){

            cur_sum+=nums[i];

            if(max_sum<cur_sum){
                max_sum=cur_sum;
            }

            if(cur_sum<0){
                cur_sum=0;
            }
        }

        return max_sum;
    }
};


int kadane(vector<int>& nums){
        int cursum=nums[0],maxsum=nums[0];

        for(int i=1;i<nums.size();i++){
            
            cursum=max(nums[i],cursum+nums[i]);
            maxsum=max(cursum,maxsum);
        }

        //Kadane's algorithm
        return maxsum;
};


int main(){
    Solution obj;
    // Add your test cases here
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<obj.KadaneAlgo(nums)<<endl;
    cout<<kadane(nums)<<endl;
    return 0;
}  