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
    bool isSameTree(TreeNode* p, TreeNode* q)
     {
      if(res)  {if(!p&&!q)
        return true;
        else if(!p||!q)
        {
            res=false;
            return false ;
        }
        isSameTree( p->left, q->left);
        if(p->val!=q->val)
        {
            res=false;
            return false;
        }
        isSameTree( p->right, q->right);
        return res;}
        else return res;
    }
};