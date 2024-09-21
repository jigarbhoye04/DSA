#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    void solve(){
        int l,r;
        cin>>l>>r;

        set<int>v;

        // for(int i=l;i<=r;++i)v.insert(i);
        int cnt=1;
        int num=l;
        for(int i=1;i<1e5;++i){
            num += i;
            if(num<=r){
                cnt++;
            }else{
                break;
            }
            // if(v.find(num) != v.end())
            // if(v[i]-v[i-1]<v[i+1]-v[i]){
            //     cnt++;
            // }else{

            // }
        }

        cout<<cnt<<endl;
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