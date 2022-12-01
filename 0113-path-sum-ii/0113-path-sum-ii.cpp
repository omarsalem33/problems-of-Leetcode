/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector< vector < int > > ans;
    vector < int > path;
    void DFS(TreeNode*root , int cur , int targetSum){
        if(!root)
            return;
        cur += root-> val;
        path.push_back(root->val);
        if(cur ==  targetSum and !root->left and !root->right)
            ans.push_back(path);
        DFS(root->left , cur , targetSum);
        DFS(root->right , cur , targetSum);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int cur = 0;
        DFS(root , cur , targetSum);
        return ans;
    }
};