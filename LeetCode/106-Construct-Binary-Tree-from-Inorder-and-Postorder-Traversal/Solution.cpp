/** PROBLEM LINK :: https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/
*/

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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int si = inorder.size();
        int sp = postorder.size();  
        TreeNode* Tree = new TreeNode(postorder[sp-1]); 
        map<int,int> m;
        for (int i=0; i < si; i++)
        {
            m[inorder[i]] = i;            
        }
        return buildTreePostIn(inorder, 0, si-1, postorder, 0, sp-1, m);
    }
    TreeNode* buildTreePostIn(vector<int> &inorder, int is, int ie, vector<int> &postorder, int ps, int pe, 
        map<int,int> &m)
    {
        if (ps>pe || is>ie) return NULL;
        TreeNode* root = new TreeNode(postorder[pe]);
        int ri = m[postorder[pe]];
        
        TreeNode* leftchild = buildTreePostIn(inorder, is, ri-1, postorder, ps, ps+ri-is-1, m); // LEFTCHILD
        TreeNode* rightchild = buildTreePostIn(inorder, ri+1, ie, postorder, ps+ri-is, pe-1, m);// RIGHTCHILD
        root->left = leftchild;
        root->right = rightchild;
        return root;
    }
};
