#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int lseq=1;
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int cnt=1;
                int x=it;
                while(s.find(x+1)!=s.end()){
                    x++;
                    cnt++;
                }
                lseq=max(lseq,cnt);
            }
        }
        return lseq;
    }
};

int main(){
    Solution obj;
    // Add your test cases here
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << obj.longestConsecutive(nums) << endl;
    return 0;
}