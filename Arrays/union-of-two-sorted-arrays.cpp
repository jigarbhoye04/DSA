#include<bits/stdc++.h>
using namespace std;
 

//gfg
class Solution {
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m){
        vector<int>res;
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(arr1[i]);
        }
        for(int i=0;i<m;i++){
            s.insert(arr2[i]);
        }
        for(auto x:s){
            res.push_back(x);
        }
        return res;
    }
};
 
int main(){
    Solution obj;
    // Add your test cases here
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {1, 2, 5, 7};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    obj.findUnion(arr1,arr2,n,m);
    return 0;
}