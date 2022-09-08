#include <iostream>
#include<string>
#include<vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
    struct TreeNode {
        int val;
        TreeNode * left;
        TreeNode * right;

    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> InorderTraversal;
        if (!root) return InorderTraversal; TreeNode *temp = root;
        if (!root->left && !root->right) InorderTraversal.push_back(root->val);
    }
}
};
int main() {

    return 0;
}