//LC: https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int lo=0,hi=0,maxLen=0;
        set<char>st;

        while(hi<n){
            if(st.find(s[hi])==st.end()){
                st.insert(s[hi]);
                maxLen = max(maxLen,hi-lo+1);
                hi++;
            }else{
                st.erase(s[lo]);
                lo++;
            }
        }
        return maxLen;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s="abcabcbb";
    // cout<<s<<endl;
    int res = obj.lengthOfLongestSubstring(s);
    cout<<res<<endl;
    return 0;
}


