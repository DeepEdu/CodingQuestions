/** PROBLEM LINK : https://leetcode.com/problems/binary-tree-preorder-traversal/
  */

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> Res;
        if(root == NULL) return Res; 
        stack<TreeNode*> s; 
        s.push(root);
        while( s.empty() != true)
        {
            TreeNode* n = s.top();
            s.pop(); 
            Res.push_back(n->val);
            // for right sub tree
            if(n->right != NULL)
            {
                s.push(n->right);
            }
            // for left sub tree 
            if(n->left!= NULL)
            {
                s.push(n->left);
            }
        }
        return Res; 
    }
};
