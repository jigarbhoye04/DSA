#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=searchL(nums,target);
        int right=searchR(nums,target);
        return {left,right};
    }
private:
    int searchL(vector<int>& nums, int target){
        int l=0;
        int r= nums.size()-1;
        int res=-1;

        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid]==target){
                res=mid;
                r = mid-1;
            }else if(nums[mid]>target) r = mid-1;
            else l = mid +1;
        }
        return res;
    }

    int searchR(vector<int>& nums, int target){
        int l=0;
        int r= nums.size()-1;
        int res=-1;

        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid]==target){
                res=mid;
                l = mid+1;
            }else if(nums[mid]>target) r = mid-1;
            else l = mid + 1;
        }

        return res;
    }
};
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    return 0;
}