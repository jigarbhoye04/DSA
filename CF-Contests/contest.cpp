#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    bool are_coprime(int a, int b, int c) {
        return __gcd(a, b) == 1 && __gcd(b, c) == 1 && __gcd(a, c) == 1;
    }

    int solve(){
        int l,r;
        cin>>l>>r;
        if(l%2==0){
            l++;
        }
        cout<<((r-l+2)/4)<<"\n";
    }

    int max_operations(int l, int r) {
        vector<int> numbers;
        for (int i = l; i <= r; ++i) {
            numbers.push_back(i);
        }
        int n = numbers.size();
        int operations = 0;
        unordered_set<int> active(numbers.begin(), numbers.end());

        while (active.size() >= 3) {  
            bool found = false;
            vector<int> to_remove;
            for (auto it1 = active.begin(); it1 != active.end(); ++it1) {
                for (auto it2 = next(it1); it2 != active.end(); ++it2) {
                    for (auto it3 = next(it2); it3 != active.end(); ++it3) {
                        int a = *it1, b = *it2, c = *it3;
                        if (are_coprime(a, b, c)) {
                            to_remove = {a, b, c};
                            found = true;
                            break;
                        }
                    }
                    if (found) break;
                }
                if (found) break;
            }
            if (found) {
                for (int num : to_remove) {
                    active.erase(num);
                }
                ++operations;
            } else {
                break;
            }
        }
        return operations;
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