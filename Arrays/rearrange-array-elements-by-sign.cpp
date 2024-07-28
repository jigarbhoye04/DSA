#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>pos,neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                // pos.push_back(nums[i]);
                pos.insert(pos.begin(),nums[i]);
            }else{
                // neg.push_back(nums[i]);
                neg.insert(neg.begin(),nums[i]);
            }
        }   

        for(int i=0;i<nums.size();i++){
            if(!pos.empty()){
                ans.push_back(pos.back());
                pos.pop_back();
            }
            if(!neg.empty()){
                ans.push_back(neg.back());
                neg.pop_back();
            }
        }

        return ans;
    }
};
 
int main(){
    Solution obj;
    // Add your test cases here
    vector<int> nums = {-1,2,-3,4,-5,6,-7,8};
    vector<int>ans=obj.rearrangeArray(nums);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}