#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        // int i=0,j=n;
        // int lasti=m-1,lastj=0;
        int top = 0, bottom = m-1;
        int left = 0, right = n-1;

        vector<int> res;
        while(top <= bottom & left <= right){
            //left-right
            for(int i=left; i<=right;i++){
                res.push_back(matrix[top][i]);
            }
            top++;

            //down
            for(int i=top;i<=bottom;i++){
                res.push_back(matrix[i][right]);
            }
            right--;

            //right-left if remaining
            if(top<=bottom){
                for(int i=right;i>=left;--i){
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            //upwards if no col remaining
            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};

int main(){
    Solution obj;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int>res = obj.spiralOrder(matrix);
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}

