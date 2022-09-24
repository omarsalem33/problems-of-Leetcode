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
        vector < vector < int > > ans ; 
        vector < int > path;
        
        void dfs(TreeNode* root ,int cur, int targetsum)
        {
                if(!root)
                        return;
                cur += root-> val;
                path.push_back(root->val);
                if(cur == targetsum and !root->left and !root->right)
                        ans.push_back(path);
                dfs(root->left, cur, targetsum);
                dfs(root->right, cur, targetsum);
                path.pop_back();
        }
        
        
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, 0 , targetSum);
            return ans;
    }
};


