/**
Definition for a binary tree node.
    struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 */

#include <vector>
using namespace std;

class Solution {
public:

    void traverse(TreeNode* root, vector<vector<int>>& arr, int level, vector<bool>& levels) {
        if( root == nullptr)
            return;
        if(levels[level])
            arr[level].push_back(root->val);
        else {
            levels[level] = true;
            arr.push_back(vector<int>());
            arr[level].push_back(root->val);
        }
        if(root->left != nullptr) {
            level++;
            traverse(root->left, arr, level, levels);
            level--;
        }
        if(root->right != nullptr) {
            level++;
            traverse(root->right, arr, level, levels);
            level--;
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> arr;
        vector<bool> levels;
        levels.assign(2000,false);
        traverse(root, arr, 0, levels);
        return arr;
    }
};