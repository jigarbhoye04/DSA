#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        int num=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            if(it.second>n){
                num = it.first;
            }
        }

        return num;
    }
};
 
int main(){
    Solution obj;
    // Add your test cases here
    vector<int> nums = {3,2,3};
    cout<<obj.majorityElement(nums);
    return 0;
}