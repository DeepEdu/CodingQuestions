/** PROBLEM LINK : https://leetcode.com/problems/binary-tree-inorder-traversal/
  */
  
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> Res;
        stack<TreeNode*> s;
        if(root == NULL) return Res;
        // push root node to stack
        s.push(root);
        while(s.empty() != true)
        {
            TreeNode* n = s.top();
            // if left node is not null push to stack
            if(n->left != NULL)
            {
                s.push(n->left);
                n->left = NULL;
            }
            else
            {
                Res.push_back(n->val);
                s.pop();
                // if right node is not null push to stack
                if(n->right != NULL)
                {
                    s.push(n->right);
                }
            }
        }
        return Res;
    }
};
