//--------------------UPSOLVED--------------------//


#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    void solve(){
        int n;
        cin>>n;
        vector<int>a(n);

        for(int i=0;i<n;++i) cin>>a[i], a[i]--; //zero based indexing
        string str;
        cin>>str;

        vector<int>ans(n),vis(n);

        for(int i=0;i<n;++i){
            if(vis[i]) continue;
            int cnt=0,x=i;
            vector<int>path;
            while(!vis[x]){
                vis[x]=1;
                str[x]=='0' ? cnt+= 1 :cnt+=0;

                path.push_back(x);
                x = a[x];
            }
            //updating accesible blk nodes. from path.
            for(auto it:path){
                ans[it]=cnt;
            }
        }

        for(int i=0;i<n;++i){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
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