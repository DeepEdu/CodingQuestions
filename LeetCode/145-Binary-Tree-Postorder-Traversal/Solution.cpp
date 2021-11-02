/** PROBLEM LINK : https://leetcode.com/problems/binary-tree-postorder-traversal/
  */


class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> Res;
        if(root == NULL) return Res;
        stack<TreeNode*> st1, st2; 
        st1.push(root); 
        while( st1.empty() != true ) 
        {
            root = st1.top(); 
            st1.pop();
            st2.push(root); 
            if(root->left != NULL) 
            {
                st1.push(root->left); 
            }
            if(root->right != NULL) 
            {
                st1.push(root->right); 
            }
        }
        while(st2.empty() != true) 
        {
            Res.push_back(st2.top()->val); 
            st2.pop(); 
        }
        return Res;
    }
};
