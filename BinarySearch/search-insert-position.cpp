#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;

        while(left<=right){
            int mid = left + (right-left)/2;

            if(nums[mid]==target){
                return mid;
            }else if(nums[mid] > target){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }

        return left;
    }
};
 
int main(){
    Solution obj;
    vector<int>nums = {1,3,5,6};
    int target = 2;
    cout<<obj.searchInsert(nums,target)<<endl;
    return 0;
}