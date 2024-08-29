#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
//wtf bc it was that easy.
//lol
        mp[0]=1;
        int psum=0,cnt=0;

        for(int i=0;i<nums.size();i++){
            psum += nums[i];
            int remove = psum-k;
            cnt += mp[remove];
            mp[psum] += 1;
        }
        return cnt;
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    return 0;
}