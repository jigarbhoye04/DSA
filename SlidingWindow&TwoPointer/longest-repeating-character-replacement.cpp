//LC: https://leetcode.com/problems/longest-repeating-character-replacement/

#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int characterReplacement(string s, int k) {
        int lo=0,hi=0,n=s.size(),maxlen=0;
        unordered_map<char,int>mp;
        int maxFreq=0;

        while(hi<n){
            mp[s[hi]]++;
            maxFreq=max(maxFreq,mp[s[hi]]);
            if( (hi-lo+1) - maxFreq  > k){
                mp[s[lo]]--;
                lo++;
            }
            maxlen = max(hi-lo+1,maxlen);
            hi++;
        }
        return maxlen;
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    return 0;
}