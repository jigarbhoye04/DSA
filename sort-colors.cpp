#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    //1-red 2-white 3-blue
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }
    }
};
 
int main(){
    Solution obj;
    vector<int> nums = {2,0,2,1,1,0};
    obj.sortColors(nums);
    for(auto it:nums){
        cout<<it<<" ";
    }
    return 0;
}