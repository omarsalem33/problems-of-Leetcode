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
    vector<int>inorder;
    void in(TreeNode* root){
        if(root==NULL)return;
        if(root->left) in(root->left);
        inorder.push_back(root->val);
        if(root->right)in(root->right);
        
    }
     bool findTarget(TreeNode* root, int k) {
        in(root);
        int i=0,j=inorder.size()-1;
        int sum=0;
        while(i<j){
            sum=inorder[i]+inorder[j];;
            if(sum>k){
                j--;               
            }else if(sum<k){
                i++;
                
            }else{
                return true;
            }
        }
        return false;
        
    }
};