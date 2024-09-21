#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool ispfsq(long long x){
        if (x >= 0) {
            long long sr = sqrt(x);
            return (sr * sr == x);
        }
        return false;
    }

    bool solve(string s) {
        int n=s.length();
        int k=sqrt(n);
        if (k*k!=n) {
            return false;
        }

        //first last k
        for(int i=0;i<k;++i){
            if(s[i]!='1' || s[n-k+i]!='1'){
                // cout<<s[i]<<" "<< s[n-k+i]<<endl;
                return false;
            }
        }

        //left right
        for(int i=1; i<k-1;++i) {
            if (s[i*k]!='1'||s[i*k+k-1]!='1') {
                // cout<<s[i*k]<<" "<<s[i*k+k-1]<<endl;
                return false;
            }
        }

        for(int i=1;i<k-1;++i) {
            for(int j=1;j<k-1;++j) {
                if (s[i*k + j] != '0') {
                    return false;
                }
            }
        }
        return true;
    }

    int solve(){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        if (!ispfsq(n)) {
            cout<<"No" << endl;
            return -1;
        }

        cout<<(solve(s) ? "Yes" :"No")<<endl;
        return 0;
    }
};

int main() {
    int t;
    cin >> t;
    Solution solution;
    while (t--) {
        solution.solve();
    }
    return 0;
}