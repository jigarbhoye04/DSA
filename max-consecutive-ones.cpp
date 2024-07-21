#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }else{
                maxOnes = max(maxOnes, count);
                count=0;
            }
            maxOnes = max(maxOnes, count);
        }
        return maxOnes;
    };
    // Time complexity: O(n)
    // Space complexity: O(1)
};

int main(){
    Solution obj;
    vector<int> nums = {1,1,0,1,1,1};
    cout<<obj.findMaxConsecutiveOnes(nums)<<endl;
    vector<int> nums1 = {1,0,1,1,0,1};
    cout<<obj.findMaxConsecutiveOnes(nums1)<<endl;
    vector<int> nums2 = {0,0,0,0,0,0};
    cout<<obj.findMaxConsecutiveOnes(nums2)<<endl;
    return 0;
}