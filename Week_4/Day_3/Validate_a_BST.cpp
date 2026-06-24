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
       bool valid(TreeNode* root,int min,int max){
        if(root==NULL){
            return true;
        }
        if(root->val<min || root->val>max){  //if value is out of range then we return false
            return false;
        }
        return valid(root->left,min,root->val)&&valid(root->right,root->val,max);  //check left and right subtree all node must be smaller than max and larger than min
       }
    bool isValidBST(TreeNode* root) {
        return valid(root,INT_MIN,INT_MAX);  //starting with int max and int min range
    }
};