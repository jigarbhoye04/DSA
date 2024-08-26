#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        int result = 0;
        int n = s.length();
        
        // space
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        // sign
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        // digi to int
        while (i < n && isdigit(s[i])) { //using isdigit
            int digit = s[i] - '0';
            
            // overflow underflow
            if (result > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            i++;
        }
        
        return result * sign;
    }
};

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    return 0;
}