#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int left1 = 0,left2 = 0, right = 0;
        int sum1 = 0,sum2 = 0;
        int cnt = 0;

        for (right=0; right < n; ++right) {
            sum1+= nums[right];
            sum2+= nums[right];

            while(left1<=right && sum1>goal) {
                sum1-=nums[left1++];
            }

            while(left2 <= right && sum2 >=goal) {
                sum2-=nums[left2++];
            }
            cnt += left2 - left1;
        }
        return cnt;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {1, 0, 1, 0, 1}; // Example input
    int goal = 2; // Example goal
    cout << obj.numSubarraysWithSum(nums, goal) << endl;
    return 0;
}