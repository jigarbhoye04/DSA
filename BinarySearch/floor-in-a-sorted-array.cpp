//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    int bsearch(vector<long long>& nums,long long target){
        long long left=0,right=nums.size()-1;
        long long floorIdx=-1;
        
        while(left <= right){
            long long mid  = left + (right - left)/2;
            
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid] > target){
                right = mid-1;
            }else{
                floorIdx=mid;
                left = mid+1;
            }
        }
        
        return floorIdx;
    }
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {
        int res = bsearch(v,x);
        return res;
        // Your code here
        
    }
};


//{ Driver Code Starts.

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends



//https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1