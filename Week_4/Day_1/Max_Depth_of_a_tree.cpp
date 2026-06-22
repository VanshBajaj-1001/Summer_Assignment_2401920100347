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
    int maxDepth(TreeNode* root) {
        if(root==NULL){  //base case 
            return 0;//if the node is null then the height of that node is null
        }
        int leftheight=maxDepth(root->left); //we recursively move to the the left node of the current node  calculating the depth of the node
        int rightheight=maxDepth(root->right);//we recursively move to the the right node of the current node  calculating the depth of the node

        return 1+max(leftheight,rightheight);  //1 for itself and maxheight of current node's left and right subtree
    }
};

//we can also solve this question using level order r=traversal or the BFS traversal of tree
//which would require a queue and a vector storing vectors