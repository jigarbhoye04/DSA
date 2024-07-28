#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        //M1: Inbuilt fn
        // next_permutation(nums.begin(),nums.end());
        
        //M2: Without inbuilt fn
        int ind = -1;
        int n = nums.size();

        for(int i=n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }

        if(ind == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=n-1;i>ind;i--){
            if(nums[i] > nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }

        
        reverse(nums.begin()+ind+1,nums.end());
    }
};
 
int main(){
    Solution obj;
    vector<int>nums= {5,6,8,4,3,0,0};
    cout<<"Before Permutation: ";
    for(auto i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
    obj.nextPermutation(nums);
    cout<<"After Permutation: ";
    for(auto i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}


//TC: O(N) {N is the size of the array}
//SC: O(1) {In place}