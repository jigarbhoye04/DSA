#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int i=0, j=n-1;
        int maxArea=0;
        while(i<j){
            int h = min(height[i],height[j]);
            maxArea = max(maxArea, h*(j-i));
            while(height[i]<=h && i<j) i++;
            while(height[j]<=h && i<j) j--;
        }   
        return maxArea;
    }
};
 
int main(){
    Solution obj;
    // Add your test cases here
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<obj.maxArea(height)<<endl;
    return 0;
}