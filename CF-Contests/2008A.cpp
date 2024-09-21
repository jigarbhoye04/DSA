#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int solve(){
        int a, b;
        cin >> a >> b;
        
        int sum = a + 2 * b;
        if (sum % 2 != 0) {
            cout <<"NO"<< endl;
            return -1;
        }
        int target = sum / 2;
        
        int maxTwos=min(b,target / 2);
        int rem=target - 2 *maxTwos;
        
        if (rem <= a) {
            cout<< "YES"<< endl;
        } else {
            cout<<"NO"<< endl;
        }
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int t;cin>>t;
    while(t--){
        obj.solve();
    }
    return 0;
}