#include<bits/stdc++.h>
using namespace std;
 
class Solution {

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

public:
    // int maxDepth(TreeNode* root){
    //     if(root==NULL){
    //         return 0;
    //     }
    //     int lh=maxDepth(root->left);
    //     int rh=maxDepth(root->right);
    //     return 1+max(lh,rh);
    // }

    //iterative - level order
    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }

        queue<TreeNode*>q;
        q.push(root);

        int depth =0;

        while(!q.empty()){
            int lvlsize=q.size();

            for(int i=0;i<lvlsize;i++){
                TreeNode* node = q.front();

                q.pop();

                if(node->left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);
            }
            depth++;
        }

        return depth;
    }
};



//DFS with stack
/*
if (root == nullptr)
    return 0;

stack<pair<TreeNode*, int>> s;  // Stack stores node and depth
s.push({root, 1});
int maxDepth = 0;

while (!s.empty()) {
    auto [node, depth] = s.top();
    s.pop();
    if (node != nullptr) {
        maxDepth = max(maxDepth, depth);
        s.push({node->left, depth + 1});
        s.push({node->right, depth + 1});
    }
}
return maxDepth;
*/
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int t;cin>>t;
    while(t--){
        // obj.solve();
    }
    return 0;
}