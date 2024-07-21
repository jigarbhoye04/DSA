#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    // int singleNumber(vector<int>& nums) {
    //     unordered_map<int,int>mp;
    //     for(int i=0;i<nums.size();i++){
    //         mp[nums[i]]++;
    //     }
    //     int num=0;
    //     for(auto it:mp){
    //         if(it.second==1){
    //             num = it.first;
    //         }
    //     }

    //     return num;
    // }
    // Time complexity: O(n)
    // Space complexity: O(n)


    //think jigx think Space Complexity must be O(1) 
    //XOR thi thase kadach
    int singleNumber(vector<int>& nums){
        int num=0;
        for(int i=0;i<nums.size();i++){
            num = num^nums[i];
        }

        return num;
    }
};
 
int main(){
    Solution obj;
    // Add your test cases here
    vector<int> nums = {2,4,3,2,4};
    cout<<obj.singleNumber(nums)<<endl;
    return 0;
}