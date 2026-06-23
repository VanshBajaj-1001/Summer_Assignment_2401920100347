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
   vector<int> ans;  //vector to store traversal
   void inorder(TreeNode* root){  //fn to perform inorder traversal
    if(root==NULL){  //if node is null we go back
        return; 
    }
    inorder(root->left);  //move to the left node
    ans.push_back(root->val); // print the root node
    inorder(root->right);   //move to the right node
   }
    vector<int> inorderTraversal(TreeNode* root) {
      inorder(root);
      return ans;  
    }
};