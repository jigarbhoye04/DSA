#include<bits/stdc++.h>
using namespace std;

//leetcode-permutations
 
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp;
        vector<bool>visited(nums.size(),false);
        dfs(nums,res,temp,visited);
        return res;
    }

    void dfs(vector<int>& nums,vector<vector<int>>& res,vector<int>& temp,vector<bool>& visited){
        if(temp.size() == nums.size()){
            res.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(visited[i]) continue;
            visited[i] = true;
            temp.push_back(nums[i]);
            dfs(nums,res,temp,visited);
            temp.pop_back();
            visited[i] = false;
        }
    }
};
 
int main(){
    Solution obj;
    vector<int>nums= {1,2,3,4,5,6,9};
    vector<vector<int>>res = obj.permute(nums);
    for(auto i:res){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}