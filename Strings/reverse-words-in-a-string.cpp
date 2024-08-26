#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        vector<string> vectstr;
        string newstr;

        while (i < n) {
            while (i < n && s[i] == ' ') {
                i++;
            }

            while (i < n && s[i] != ' ') {
                newstr.push_back(s[i]);
                i++;
            }

            if (!newstr.empty()) {
                vectstr.push_back(newstr);
                newstr.clear();
            }
        }

        reverse(vectstr.begin(), vectstr.end());

        string finalstr;
        for (int i = 0; i < vectstr.size(); ++i) {
            finalstr.append(vectstr[i]);
            if (i != vectstr.size() - 1) {
                finalstr.push_back(' '); 
            }
        }

        return finalstr;
    }
};

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    return 0;
}