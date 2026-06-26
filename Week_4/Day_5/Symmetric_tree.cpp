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
bool isMirror(TreeNode* left,TreeNode* right){
    if(left==NULL && right==NULL){//if left right subtree are null then it is symettric
        return true;
    }
    if(left==NULL || right==NULL){ //if either of them is null then it isnt symmetric
        return false;
    }
    if(left->val!=right->val){ //if value do not match it is not symmetric
        return false;
    }
    return isMirror(left->left,right->right)&&isMirror(left->right,right->left);  //checking mirror condition left's left and right's right is same
                                                                                //and left's right is same as right's left
}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){//if root is null then it is symmetric
            return true;
        }
        return isMirror(root->left,root->right);//checking for left and right subtree
    }
};