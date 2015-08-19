/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* tmp = root;
        //the ancestor must between p and q, or be one of them
		while (tmp)
		{
			if (tmp->val > p->val && tmp->val > q->val)
				tmp = tmp->left;
			else if (tmp->val < p->val && tmp->val < q->val)
				tmp = tmp->right;
			else
				return tmp;
		}
		return tmp;
    }
};