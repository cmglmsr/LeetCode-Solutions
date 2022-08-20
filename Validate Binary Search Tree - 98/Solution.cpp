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
    void validate(TreeNode* root, bool& valid, long int min, long int max) {
        if(root->left != NULL) {
            if(root->left->val >= root->val | root->left->val <= min)
                valid = false;
            validate(root->left, valid, min, root->val);
        }
        if(root->right != NULL) {
            if(root->right->val >= max | root->right->val <= root->val)
                valid = false;
            validate(root->right, valid, root->val, max);
        }
    } 
    bool isValidBST(TreeNode* root) {
        bool valid = true;
        validate(root, valid, -2147483649, 2147483648);
        return valid;
    }
};