#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    res.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        for(auto i:res){
            for(auto j:i){
                cout<<j<<" ";
            }
        }

        return res;
    }
};
 
int main(){
    Solution obj;
    vector<int>nums = {-1,0,1,2,-1,-4};
    // vector<int>nums = {0,0,0};
    obj.threeSum(nums);
    return 0;
}