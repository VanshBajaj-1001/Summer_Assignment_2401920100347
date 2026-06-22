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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr){  //if both tree's node are null then the are same
            return true;
        }
        if(p==nullptr || q==nullptr){//if one node exists and other does not exist
            return false;  //then return false
        }
        if(p->val!=q->val){  //if the value are not same
            return false;//then return false    
        }
        bool leftsame=isSameTree(p->left,q->left);  //check the same for left subtree
        bool rightsame=isSameTree(p->right,q->right);//check the same for right subtree

        return leftsame && rightsame; //if both return true then they are same
    }
};