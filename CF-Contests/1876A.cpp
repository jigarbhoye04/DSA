#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
class Solution {
public:
    void helmetinnightlight(){
        ll n,p;
        cin>>n>>p;

        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        vector<pair<int,int>>vc;
        for(int i=0;i<n;i++){
            vc.push_back({b[i],a[i]});
        }
        sort(vc.begin(),vc.end());
        /*
        6 3
        2 3 2 1 1 3
        4 3 2 6 3 6
        new
        2 1 3 2 1 3
        2 3 3 4 6 6
        */


    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int t;
    cin>>t;
    while(t--){
        obj.helmetinnightlight();
    }
    return 0;
}