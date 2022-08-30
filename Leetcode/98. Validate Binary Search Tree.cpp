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
    bool isValidBST(TreeNode* root) {
        return this->validate(root,nullptr,nullptr);
    }
    
    bool validate(TreeNode *root, TreeNode *low,TreeNode *high){
        if(!root) {
            return true;
        }
        if((low != nullptr && low->val >= root->val)
        || (high != nullptr && high->val <= root->val))
        {
            return false;
        }
        return validate(root->right, root,high) && validate(root->left,low,root);
    }
};