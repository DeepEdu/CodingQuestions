/** PROBLEM LINK : https://leetcode.com/problems/unique-binary-search-trees-ii/
  */

class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        return solution(1,n);        
    }
    vector<TreeNode *> solution(int start ,int end)
    {
        vector<TreeNode*> v;
        // condition for no node
        if(start > end)
        {
            v.push_back(NULL);
            return v;
        }
        for(int i = start; i <= end; i++)
        {
            //for left tree
            vector<TreeNode *> leftTree = solution(start,i-1);
            // for right tree
            vector<TreeNode *> rightTree = solution(i+1, end);
            for(TreeNode* l : leftTree)
            {
                for(TreeNode* r : rightTree)
                {
                    TreeNode* root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    v.push_back(root);
                }
            }
        }
        return v;
    }
};
