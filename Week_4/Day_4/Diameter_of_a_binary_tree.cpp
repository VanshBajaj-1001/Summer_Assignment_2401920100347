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
      int findmax(TreeNode* root, int &d){ //returns the height of current subtree
        if(root==NULL){//base case
            return 0;
        }
        int lh=findmax(root->left,d);//finding the height of left subtree
        int rh=findmax(root->right,d);//finding the height of right subtree
        d=max(d,lh+rh);

        return 1+max(lh,rh); //return height for current node 1+ max of left and right height
      }
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0; //used to store max diameter of tree
        findmax(root,d);  //traversing tree and updating
        return d;
    }
};