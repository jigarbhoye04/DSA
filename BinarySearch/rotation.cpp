#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int findKRotation(vector<int> &arr){
        // Write your code here. 
        int l=0;
        int n = arr.size()-1;
        int r=n;

        while(l<=r){
            if(arr[l]<=arr[r]){
                return l;
            }
            int mid = l + (r-l)/2;

            if(mid<n && arr[mid]>arr[mid+1]){
                return mid+1;
            }

            if(mid>0 && arr[mid]<arr[mid-1]){
                return mid;
            }
        }
        return 0;
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    return 0;
}