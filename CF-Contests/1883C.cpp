#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    void raspberries(){
        int t;
        cin>>t;
        while(t--){
            long long n,k;
            cin>>n>>k;
            long long ans=k;
            long long temp=2;
            for(int i=0;i<n;i++){
                long long x;
                cin>>x;
                // 7 4
                // 9 6 1 5 9 5 1
                if(x%k==0){
                    ans=0;
                }else if(k==4 && x%2==0 ){
                    temp = max(temp-1,0LL);
                }else{
                    ans = min(ans,k-(x%k));
                }

                if(k==4)
                    ans = min(temp,ans);
            }

            cout<<ans<<endl;
        }
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    obj.raspberries();
    return 0;
}