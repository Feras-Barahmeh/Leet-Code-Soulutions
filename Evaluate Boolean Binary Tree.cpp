// https://leetcode.com/problems/evaluate-boolean-binary-tree/
class Solution {
public:

    bool evaluateTree(TreeNode* root) {

        if(root->left==NULL && root->right == NULL){
            return root->val;
        }

        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);
        bool ans;
        if(root->val == 2){
            ans = left || right;
        }
        else{
            ans = left && right;
        }

        return ans;
    }
};