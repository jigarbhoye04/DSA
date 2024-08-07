
#include<bits/stdc++.h>
using namespace std;

class jigx{
public:
    string solve(string s, string t) {
        int lenS = s.length(), lenT = t.length();
        int idxT = 0;
        
        for (int i = 0; i < lenS && idxT < lenT; ++i) {
            if (s[i] == '?' || s[i] == t[idxT]) {
                s[i] = t[idxT];
                ++idxT;
            }
        }
        
        if (idxT == lenT) {
            for (char& c : s) {
                if (c == '?') c = 'a';
            }
            return s;
        }
        
        return "";
    }
};

int main() {
    jigx obj;
    int T;
    cin >> T;
    
    while (T--) {
        string s, t;
        cin >> s >> t;
        
        string result = obj.solve(s, t);
        
        if (result.empty()) {
            cout << "NO\n";
        } else {
            cout << "YES\n" << result << "\n";
        }
    }
    
    return 0;
}