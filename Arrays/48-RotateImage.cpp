#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        //transpose mat..
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap( matrix[i][j] , matrix[j][i] );
            }
        }

        //then just reverse cols;
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};


int main(){
    Solution obj;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    obj.rotate(matrix);
    for(auto it:matrix){
        for(auto j:it){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}