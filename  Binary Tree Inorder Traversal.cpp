
// https://leetcode.com/problems/binary-tree-inorder-traversal/
class Solution {
public:
    void PrintTree(TreeNode * root, vector<int>& InorderTraversal) {

        if ( root == NULL ) {
            return ;
        }

        PrintTree(root->left, InorderTraversal);
        InorderTraversal.push_back(root->val);
        PrintTree(root->right, InorderTraversal);

    }
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> InorderTraversal;
        PrintTree(root, InorderTraversal);
        return InorderTraversal;
    }
};