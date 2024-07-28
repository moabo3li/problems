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
bool res=true;
vector<int >tree;
  bool isValidBST(TreeNode* root) {
        if (res) {
            if (!root)
                return true; 
            isValidBST(root->left);
            if (tree.empty()) {
                tree.push_back(root->val);
            } else if (tree.back() >= root->val) { 
                res = false;
                return res;
            } else {
                tree.push_back(root->val);
            }
            isValidBST(root->right);
        }
        return res;
    }
};