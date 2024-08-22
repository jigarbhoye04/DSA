#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=1;
        int n=nums.size();
        int r=n-2;
        if(n==1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums.back()!= nums[n-2]) return nums.back();
        while(l<=r){
            int mid = l + (r-l)/2;
            bool odd = 0;
            if(nums[mid]!=nums[mid+1] && nums[mid]!= nums[mid-1]) return nums[mid];
            if(mid&1) odd=1;
            if(nums[mid]==nums[mid+1]){
                if(odd){
                    r = mid-1;
                }else{
                    l = mid+1;
                }
            }else if(nums[mid]==nums[mid-1]){
                if(odd){
                    l = mid+1;
                }else{
                    r = mid-1;
                }
            }
        }return -1;
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    return 0;
}