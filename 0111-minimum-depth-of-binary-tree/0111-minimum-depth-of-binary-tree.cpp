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
    int minDepth(TreeNode* root) 
    {
        if(!root) return 0;
        // cout << "val = " << root->val <<　" --> ";
        int L = minDepth(root->left);
        int R = minDepth(root->right);
        // cout << min(L, R) + 1 << endl;
        return (L && R) ? min(L, R) + 1 : L + R + 1;
    }
};