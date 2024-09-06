// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
 
// // // // // class Solution {
// // // // // public:
// // // // //     int solve(){
// // // // //         int a, b;
// // // // //         cin >> a >> b;
        
// // // // //         int sum = a + 2 * b;
// // // // //         if (sum % 2 != 0) {
// // // // //             cout <<"NO"<< endl;
// // // // //             return -1;
// // // // //         }
// // // // //         int target = sum / 2;
        
// // // // //         int maxTwos=min(b,target / 2);
// // // // //         int rem=target - 2 *maxTwos;
        
// // // // //         if (rem <= a) {
// // // // //             cout<< "YES"<< endl;
// // // // //         } else {
// // // // //             cout<<"NO"<< endl;
// // // // //         }
// // // // //     }
// // // // // };
 
// // // // // int main(){
// // // // //     ios_base::sync_with_stdio(false);
// // // // //     cin.tie(NULL);
// // // // //     Solution obj;
// // // // //     int t;cin>>t;
// // // // //     while(t--){
// // // // //         obj.solve();
// // // // //     }
// // // // //     return 0;
// // // // // }



// // // // #include<bits/stdc++.h>
// // // // using namespace std;
 
// // // // class Solution {
// // // // public:
// // // //     bool ispfsq(long long x){
// // // //         if (x >= 0) {
// // // //             long long sr = sqrt(x);
// // // //             return (sr * sr == x);
// // // //         }
// // // //         return false;
// // // //     }
// // // //     int solve(){
// // // //         long long n;
// // // //         cin>>n;
// // // //         string s;
// // // //         cin>>s;
// // // //         if(!ispfsq(n)){
// // // //             cout<<"NO"<<endl;
// // // //             return -1;
// // // //         }else{

// // // //         }


// // // //     }
// // // // };
 
// // // // int main(){
// // // //     ios_base::sync_with_stdio(false);
// // // //     cin.tie(NULL);
// // // //     Solution obj;
// // // //     int t;cin>>t;
// // // //     while(t--){
// // // //         obj.solve();
// // // //     }
// // // //     return 0;
// // // // }


// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;

// // // // // class Solution {
// // // // // public:
// // // // //     bool ispfsq(long long x){
// // // // //         if (x >= 0) {
// // // // //             long long sr = sqrt(x);
// // // // //             return (sr * sr == x);
// // // // //         }
// // // // //         return false;
// // // // //     }

// // // // //     bool solve(string s) {
// // // // //         int n=s.length();
// // // // //         int k=sqrt(n);
// // // // //         if (k*k!=n) {
// // // // //             return false;
// // // // //         }

// // // // //         //first last k
// // // // //         for(int i=0;i<k;++i){
// // // // //             if(s[i]!='1' || s[n-k+i]!='1'){
// // // // //                 // cout<<s[i]<<" "<< s[n-k+i]<<endl;
// // // // //                 return false;
// // // // //             }
// // // // //         }

// // // // //         //left right
// // // // //         for(int i=1; i<k-1;++i) {
// // // // //             if (s[i*k]!='1'||s[i*k+k-1]!='1') {
// // // // //                 // cout<<s[i*k]<<" "<<s[i*k+k-1]<<endl;
// // // // //                 return false;
// // // // //             }
// // // // //         }

// // // // //         for(int i=1;i<k-1;++i) {
// // // // //             for(int j=1;j<k-1;++j) {
// // // // //                 if (s[i*k + j] != '0') {
// // // // //                     return false;
// // // // //                 }
// // // // //             }
// // // // //         }
// // // // //         return true;
// // // // //     }

// // // // //     int solve(){
// // // // //         long long n;
// // // // //         cin >> n;
// // // // //         string s;
// // // // //         cin >> s;
// // // // //         if (!ispfsq(n)) {
// // // // //             cout<<"No" << endl;
// // // // //             return -1;
// // // // //         }

// // // // //         cout<<(solve(s) ? "Yes" :"No")<<endl;
// // // // //         return 0;
// // // // //     }
// // // // // };

// // // // // int main() {
// // // // //     int t;
// // // // //     cin >> t;
// // // // //     Solution solution;
// // // // //     while (t--) {
// // // // //         solution.solve();
// // // // //     }
// // // // //     return 0;
// // // // // }


// // // // #include<bits/stdc++.h>
// // // // using namespace std;
 
// // // // class Solution {
// // // // public:
// // // //     void solve(){
// // // //         long long l,r;
// // // //         cin>>l>>r;

// // // //         long long left=0,right=1e5; //ub k
// // // //         long long maxlen=0;

// // // //         /*
// // // //         a=1
// // // //         a=l+1
// // // //         a=l+1+2
// // // //         a=l+1+2+3...
// // // //         */
// // // //         while (left <= right) {
// // // //             long long mid = (left + right)/2;
// // // //             if(l+mid * (mid+1)/2 <= r){ //sum first k
// // // //                 maxlen=mid+1;
// // // //                 left=mid+1;
// // // //             }else{
// // // //                 right=mid-1;
// // // //             }
// // // //         }

// // // //         cout <<maxlen<<endl;
// // // //     }
// // // // };
 
// // // // int main(){
// // // //     ios_base::sync_with_stdio(false);
// // // //     cin.tie(NULL);
// // // //     Solution obj;
// // // //     int t;cin>>t;
// // // //     while(t--){
// // // //         obj.solve();
// // // //     }
// // // //     return 0;
// // // // }


// // // #include<bits/stdc++.h>
// // // using namespace std;
 
// // // class Solution {
// // // public:
// // //     void solve(){
// // //         int l,r;
// // //         cin>>l>>r;

// // //         set<int>v;

// // //         // for(int i=l;i<=r;++i)v.insert(i);
// // //         int cnt=1;
// // //         int num=l;
// // //         for(int i=1;i<1e5;++i){
// // //             num += i;
// // //             if(num<=r){
// // //                 cnt++;
// // //             }else{
// // //                 break;
// // //             }
// // //             // if(v.find(num) != v.end())
// // //             // if(v[i]-v[i-1]<v[i+1]-v[i]){
// // //             //     cnt++;
// // //             // }else{

// // //             // }
// // //         }

// // //         cout<<cnt<<endl;
// // //     }
// // // };
 
// // // int main(){
// // //     ios_base::sync_with_stdio(false);
// // //     cin.tie(NULL);
// // //     Solution obj;
// // //     int t;cin>>t;
// // //     while(t--){
// // //         obj.solve();
// // //     }
// // //     return 0;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;


// // class Solution{
// // public:
// //     void solve() {
// //         int n;
// //         cin >> n;
// //         vector<int> ind(n);
// //         vector<int> color(n);
// //         for (int i=0;i<n;++i) {
// //             cin >>ind[i];
// //             ind[i]--;//zero ind
// //         }
// //         string s;
// //         cin>>s;
// //         for(int i =0;i<n;++i) {
// //             color[i]=(s[i]=='0') ? 1 : 0; //1b 0w
// //         }

// //         vector<int>ans(n, 0);
// //         vector<bool>visited(n,false);

// //         for (int i=0;i<n;++i) {
// //             if (!visited[i]) {
// //                 vector<int>cycl;
// //                 int x=i;
// //                 while (!visited[x]) {
// //                     visited[x] = true;
// //                     cycl.push_back(x);
// //                     x = ind[x];
// //                 }
// //                 int blackcnt = 0;
// //                 for (int it : cycl){
// //                     blackcnt += color[it];
// //                 }
// //                 for (int it : cycl){
// //                     ans[it] = blackcnt;
// //                 }
// //             }
// //         }

// //         for (int i=0; i<n;++i) {
// //             cout<<ans[i]<<" ";
// //         }
// //         cout<<endl;
// //     }
// // };

// // int main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int t;
// //     Solution obj;
// //     cin >> t;
// //     while (t--) {
// //         obj.solve();
// //     }
// //     return 0;
// // }



// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     void solve() {
//         int n;
//         cin>>n;
//         vector<int> ind(n);
//         vector<int> color(n);
//         for (int i=0;i<n;++i) {
//             cin>>ind[i];
//             ind[i]--;//neg ind
//         }
//         string s;
//         cin>>s;
//         for(int i=0;i<n;++i) {
//             color[i]=(s[i]=='0') ? 1 : 0; // 1b 0w
//         }

//         vector<int> ans(n, 0);

//         for (int i=0; i<n;++i){
//             int blackcnt = 0;
//             int x=i;
//             while (true) {
//                 blackcnt += color[x];
//                 x=ind[x];
//                 if(x==i) break; //cycle
//             }
//             ans[i]=blackcnt;
//         }

//         for(int i=0;i<n;++i) {
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     Solution obj;
//     cin >> t;
//     while(t--){
//         obj.solve();
//     }
//     return 0;
// }




//---------------------------------------------------------------------------------------------------//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int num = 0;

    void dfs(vector<int>& vis, vector<int>& p, int i, string& s, vector<int>& cycle) {
        cycle.push_back(i);
        vis[i] = 1;
        num += (s[i] == '0');
        if (vis[p[i]]) return;
        dfs(vis, p, p[i], s, cycle);
    }

    void solve() {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            p[i]--;
        }
        string s;
        cin >> s;
        vector<int> ans(n, 0), vis(n, 0);
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                num = 0;
                vector<int> cycle;
                dfs(vis, p, i, s, cycle);
                for (int j : cycle) {
                    ans[j] = num;
                }
            }
        }
        for (int x : ans) {
            cout << x << ' ';
        }
        cout << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int t;
    cin >> t;
    while (t--) {
        obj.solve();
    }
    return 0;
}



