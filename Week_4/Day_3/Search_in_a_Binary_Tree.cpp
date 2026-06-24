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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL){  //if root if null 
            return NULL; ///then return null
        }
        if(root->val==val){  //if the node matches the required node then return the node
            return root;
        }
        if(root->val>val){  //if value is lesser than root value then we search in the left node 
            return searchBST(root->left,val);
        }
        return searchBST(root->right,val); //if value is greater than root value then we search in right node
    }
};