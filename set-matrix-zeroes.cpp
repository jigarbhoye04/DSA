// #include<bits/stdc++.h>
// using namespace std;
 
// class Solution {
// private:
//     void set(vector<vector<int>>& matrix, int indi,int indj){
//         int m=matrix.size(); //rows
//         int n=matrix[0].size(); //cols

//         //row zero
//         for(int i=indi;i<m;i++){
//             if(i>indi){
//                 break;
//             }
//             for(int j=0;j<n;j++){
//                 matrix[i][j]=0;
//             }
//         }
        
//         //set col zero
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(j==indj){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     };
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int m=matrix.size(); //rows
//         int n=matrix[0].size(); //cols
//         vector<vector<int>>positions;

//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(matrix[i][j]==0){
//                     // set(matrix,i,j);
//                     positions.push_back({i,j});
//                 }
//             }
//         }

//         for(auto i:positions){
//             set(matrix,i[0],i[1]);
//         }
//     }
// };
 
// int main(){
//     Solution obj;
//     vector<vector<int>>matrix={{2,0,8},{7,9,1},{2,6,0}};
//     obj.setZeroes(matrix);
//     for(auto i:matrix){
//         for(auto j:i){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//optimal solution

#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size(); 

        vector<bool> zeroRows(m, false);
        vector<bool> zeroCols(n, false);

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == 0) {
                    zeroRows[i] = true;
                    zeroCols[j] = true;
                }
            }
        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (zeroRows[i] || zeroCols[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

 
int main(){
    Solution obj;
    vector<vector<int>>matrix={{2,0,8},{7,9,1},{2,6,0}};
    obj.setZeroes(matrix);
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//TC: O(m*n)
//SC: O(m+n)