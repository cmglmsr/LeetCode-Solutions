/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
#include <vector>
using namespace std;

class Solution {
public:
    void preorderTraverse(Node* root, vector<int>& arr) {
        if(root == nullptr)
            return;
        arr.push_back(root->val);
        if(root->children.size() > 0)
            for(Node* n : root->children) {
                preorderTraverse(n, arr);
            }
    }
    vector<int> preorder(Node* root) { // root - left - right
        if( root == NULL)
            return vector<int>(0,0);
        vector<int> arr;
        preorderTraverse(root, arr);
        return arr;
    }
};