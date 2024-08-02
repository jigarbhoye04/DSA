/*
https://www.geeksforgeeks.org/problems/ceil-the-floor2802/0
using binary search 
tc: n log n 
    {   
        (bs: log n) but we are sorting vector so sort-> n log n
    }
sc : O(1) in place sort
*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  private:
    vector<int> bsearch(vector<int>& nums,int target){
        int left=0,right=nums.size()-1;
        int floorIdx=-1,ceilIdx=-1;
        
        sort(nums.begin(),nums.end());
        
        while(left <= right){
            int mid  = left + (right - left)/2;
            
            if(nums[mid]==target){
                return {nums[mid],nums[mid]};
            }else if(nums[mid] > target){
                ceilIdx = nums[mid];
                right = mid-1;
            }else{
                floorIdx=nums[mid];
                left = mid+1;
            }
        }
        
        return {floorIdx,ceilIdx};
    }
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        vector<int>res = bsearch(arr,x);
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends