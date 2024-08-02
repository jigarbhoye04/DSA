#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;

        while(left <= right){
            int mid = left + (right-left)/2;

            if(nums[mid]==target){
                return mid;
            }else if(nums[mid] > target){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }

        return -1;
    }
};

 
int main(){
    Solution obj;
    return 0;
}
/*
//Binary seach
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
  int binarySearch(vector<int>& nums, int target){
    int left=0, right = nums.size()-1;

    while(left <= right){
      int mid = left + (right-left)/2; //no everflow

      if(nums[mid] == target){
        return nums[mid];
      }else if(nums[mid] > target){
        right = mid-1;
      }else{
        left = mid + 1;
      }
    }
    return -1;
  }

  int recursiveBinarySearch(vector<int>& nums, int left, int right, int target){
    if(left > right){
      return -1;//target not found
    }
    int mid = left + (right - left)/2;
    if(nums[mid] == target){
      return mid;
    }else if(nums[mid] < target){
      recursiveBinarySearch(nums,mid+1,right,target);
    }else{
      recursiveBinarySearch(nums,left,mid-1,target);
    }
  }
};
 
int main(){
    Solution obj;
    vector<int>nums = {1,2,38,45,58,79,101,120,4,34,35,130,138};

    sort(nums.begin(),nums.end());
    int target = 35;
    // int result = binary_search(nums.begin(),nums.end(),target);
    int result = obj.binarySearch(nums,target);
    if(result==target){
      cout<<"Exists"<<endl;
    }else{
      cout<<"No"<<endl;
    }

    int r_res = obj.recursiveBinarySearch(nums,0,nums.size()-1,target);
    if(r_res != -1){
      cout<<"Found"<<endl;
    }else{
      cout<<"Not Found"<<endl;
    }
    return 0;
}
*/