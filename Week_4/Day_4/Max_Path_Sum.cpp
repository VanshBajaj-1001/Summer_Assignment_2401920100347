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
     int maxsum(TreeNode* node,int &maxi){
        if(node==NULL){
            return NULL;
        }
        int left=max(0,maxsum(node->left,maxi));  //finding the maximum contribution from left subtree
        int right=max(0,maxsum(node->right,maxi));//finding the max contribution from right subtree
        maxi=max(maxi,left+right+node->val);  //maximumpath passing through current node

        return max(left,right)+node->val;//returning the best single path
     }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxsum(root,maxi);
        return maxi;
    }
};