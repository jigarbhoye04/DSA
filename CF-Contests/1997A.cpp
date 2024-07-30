// https://codeforces.com/contest/1997/problem/A

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void myString(string &s) { 
        int n = s.length();
        
        for(int i = 1; i < n; ++i) {
            if(s[i] == s[i - 1]) {
                
                char newChar = s[i] + 1;
                
                if (newChar > 'z') {
                    newChar = 'a'; 
                }
                
                s.insert(i, 1, newChar);
                return; 
            }
        }
        
        char newChar = s[n - 1] + 1;
        if (newChar > 'z') {
            newChar = 'a';  
        }
        
        s.push_back(newChar); 
    }
};

int main() {
    Solution obj;
    int n;
    cin>>n;
    while(n--){
      string s;
      cin>>s;
      obj.myString(s);
      cout<<s<<endl;
    }
    // string s = "aabb";
    // obj.myString(s);
    // cout << s; 
    return 0;
}