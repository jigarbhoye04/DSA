#include<bits/stdc++.h>
using namespace std;
 
// Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.
// A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

  
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        vector<int>rowMin(matrix.size(),INT_MAX);
        vector<int>colMax(matrix[0].size(),INT_MIN);

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                rowMin[i] = min(rowMin[i],matrix[i][j]);
                colMax[j] = max(colMax[j],matrix[i][j]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(rowMin[i]==colMax[j]){
                    res.push_back(rowMin[i]);
                }
            }
        }
        return res;
    }
};
 
int main(){
    Solution obj;
    vector<vector<int>> matrix = {{3,7,8},{9,11,13},{15,16,17}};
    vector<int> res = obj.luckyNumbers(matrix);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}


//TC: O(m*n)
//SC: O(m+n)
//For this example: TC: O(3*3) = O(9) = O(1) and SC: O(3+3) = O(6) = O(1)