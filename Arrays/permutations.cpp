//Permutations using recursion:

#include<bits/stdc++.h>
using namespace std;
 
class Solution {
private:
    void CalcPermute(vector<int>& nums, vector<vector<int>>& result, int start) {
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }
        for (int i = start; i < nums.size(); i++) {
            swap(nums[start], nums[i]);
            CalcPermute(nums, result, start + 1);
            swap(nums[start], nums[i]);
        }
    };
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        CalcPermute(nums, result, 0);
        return result;
    }
};
 
int main(){
    Solution obj;
    vector<int>nums= {1,2,3,4,9};
    vector<vector<int>>res = obj.permute(nums);
    for(auto i:res){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
 
// class Solution {
// private:
//     void calcPermutations(vector<int>& ds,vector<int>& nums,int freq[],vector<vector<int>>& res){
//         if(ds.size()==nums.size()){
//             res.push_back(ds);
//             return;
//         }

//         for(int i=0;i<nums.size();i++){
//             if(freq[i]==0){
//                 ds.push_back(nums[i]);
//                 freq[i]=1;
//                 calcPermutations(ds,nums,freq,res);
//                 freq[i]=0;
//                 ds.pop_back();
//             }
//         }
//     }

// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int>ds;
//         int freq[nums.size()] = {0};
//         calcPermutations(ds,nums,freq,ans);
//         return ans;
//     }
// };
 
// int main(){
//     Solution obj;
//     vector<int>nums= {1,2,3,4};
//     vector<vector<int>>res = obj.permute(nums);
//     for(auto i:res){
//         for(auto j:i){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }