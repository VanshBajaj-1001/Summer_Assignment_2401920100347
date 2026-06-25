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
class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (root == NULL)
        { // if node is empty return false
            return false;
        }
        int sum = root->val;
        if (root->left == NULL && root->right == NULL)
        {                            // if the current node is leaf node ie does not have any right or left subtree or child
            return targetSum == sum; // we see if target sum matches current sum after subtraction
                                     // if yes i will return true or else false
        }
        bool l = hasPathSum(root->left, targetSum - sum);  // checking left subtree
        bool r = hasPathSum(root->right, targetSum - sum); // checking right subtree
        return l || r;                                     // if either of the subtree has it we return true
    }
};