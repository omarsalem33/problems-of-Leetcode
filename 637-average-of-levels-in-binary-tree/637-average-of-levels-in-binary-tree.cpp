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
    vector<double> averageOfLevels(TreeNode* root) {
         vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            double temp = q.size();
            double sum = 0;
            for(int i = 0; i < temp; i++){
                auto tt = q.front();
                q.pop();
                sum += (tt->val);
                if(tt->left){
                    q.push(tt->left);
                }
                if(tt->right){
                    q.push(tt->right);
                }
            }
            ans.push_back(sum/ temp);
        }
        return ans;
    }
    
};