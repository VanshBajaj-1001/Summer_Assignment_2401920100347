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
        if(root==NULL){  //base case for recursion
            return NULL;
        }
        int curr=root->val;//current node 
        if(curr<p->val && curr<q->val){  //checking if both nodes lie in the right subtree
            return lowestCommonAncestor(root->right,p,q);
        } 
         if(curr>p->val && curr>q->val){  //checking if both nodes lie on the left subtree
            return lowestCommonAncestor(root->left,p,q);
        }
        return root;  //when neither of the condition is true means one lies on left and other on right or the current node might be p or q
    }
};