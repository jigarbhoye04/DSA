#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int findKthNumber(int m, int n, int k){
        int l=1, r=m*n;
        while(l<r){
            int mid = l + (r-l)/2;
            int cnt=0;
            for(int i=1;i<=m;i++){
                cnt += min(mid/i,n);
            }
            if(cnt<k) l=mid+1;
            else r=mid;
        }
        cout<<l<<endl;
        return l;
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int t;cin>>t;
    while(t--){
        int m,n,k;
        cin>>n>>m>>k;
        obj.findKthNumber(n,m,k);
    }
    return 0;
}