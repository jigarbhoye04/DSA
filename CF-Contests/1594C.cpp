// #include<bits/stdc++.h>
// using namespace std;
 
// class Solution {
// private:
//     int getcnt(string& s,char& ch){
//         int cnt=0;
//         for(int i=0;i<s.size();i++){
//             if(s[i]==ch){
//                 cnt++;
//             }
//         }
//         return cnt;
//     }
// public:
//     vector<int> solve(){
//         int n; cin>>n;
//         char ch; cin>>ch;
//         string s; cin>>s;

//         int x=2;
//         int cnt=0;
//         //bzyx bzbx bbbb
//         vector<int>res;
//         while(getcnt(s,ch)!=n){ 
//             for(int i=0;i<n;i++){
//                 if(i%x==0){//0-based indexing thats why...
//                     s[i]=ch;
//                     cnt++;
//                 }
//             }
//             res.push_back(x);
//             x++;
//         }
//         return res;
//     }
// };
 
// int main(){
//     Solution obj;
//     int n;
//     cin>>n;
//     while(n--){
//         vector<int>res = obj.solve();
//         cout<<res.size()<<endl;
//         for(auto it:res){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> solve() {
        int n;
        cin >> n;
        char ch;
        cin >> ch;
        string s;
        cin >> s;

        vector<int> res;
        int cnt = 0;
        
        for (int x = 1; x <= n; ++x) {
            bool changed = false;
            for (int i = 0; i < n; i++) {
                if (i % x == 0 && s[i] != ch) {  // Check and replace
                    s[i] = ch;
                    changed = true;
                }
            }
            if (changed) {
                res.push_back(x);
            }
            if (all_of(s.begin(), s.end(), [ch](char c) { return c == ch; })) {
                break; // Exit if all characters are ch
            }
        }

        return res;
    }
};

int main() {
    Solution obj;
    int t;
    cin >> t;
    while (t--) {
        vector<int> res = obj.solve();
        cout << res.size() << endl;
        for (auto it : res) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
