// https://leetcode.com/problems/root-equals-sum-of-children/
// Easy
class Solution {
public:
    bool checkTree(TreeNode* root) {
        if ( (root->right->val + root->left->val) == root->val ) {
            return true;
        }
        return false;
    }
};