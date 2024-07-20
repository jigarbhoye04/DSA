#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> res;
        int n = rowSum.size();
        int m = colSum.size();
        res.resize(n, vector<int>(m, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[i][j] = min(rowSum[i], colSum[j]);
                rowSum[i] -= res[i][j];
                colSum[j] -= res[i][j];
            }
        }
        return res;
    }

    // Time complexity: O(n*m)
    // Space complexity: O(n*m)

    //optimal solution
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> res;
        int n = rowSum.size();
        int m = colSum.size();
        res.resize(n, vector<int>(m, 0));
        int i=0,j=0;
        while(i<n && j<m){
            res[i][j] = min(rowSum[i], colSum[j]);
            rowSum[i] -= res[i][j];
            colSum[j] -= res[i][j];
            if(rowSum[i]==0){
                i++;
            }
            if(colSum[j]==0){
                j++;
            }
        }
        return res;
    }
    // Time complexity: O(n*m)
    // Space complexity: O(n*m)
};


/*
Iterations:
First Solution: Always iterates through all elements in both rowSum and colSum regardless of when they reach zero.
Second Solution: Stops iterating over a row or column once the corresponding sum reaches zero, potentially reducing the number of iterations.

Efficiency:
First Solution: May perform unnecessary iterations after a row or column sum has reached zero, leading to less efficient processing.
Second Solution: More efficient as it avoids unnecessary iterations by stopping when a row or column sum reaches zero.
*/

int main(){
    Solution obj;
    // Add your test cases here
    //2nd test case
    vector<int> rowSum = {5,7,10};
    vector<int> colSum = {8,6,8};
    vector<vector<int>> res = obj.restoreMatrix(rowSum, colSum);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
think of any solution
which algo can we apply think jigx think....
// Input: rowSum = [5,7,10], colSum = [8,6,8]

res[i][j] = min(rowSum[i], colSum[j]);
rowSum[i] -= res[i][j];
colSum[j] -= res[i][j];



*/
// Input: rowSum = [3,8], colSum = [4,7]
// Output: [[3,0],
//          [1,7]]
// Explanation: 
// 0th row: 3 + 0 = 3 == rowSum[0]
// 1st row: 1 + 7 = 8 == rowSum[1]
// 0th column: 3 + 1 = 4 == colSum[0]
// 1st column: 0 + 7 = 7 == colSum[1]
// The row and column sums match, and all matrix elements are non-negative.
// Another possible matrix is: [[1,2],
//                              [3,5]]