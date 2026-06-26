class Solution {
public:
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int preStart,int inStart,int inEnd) {
        if (inStart > inEnd) {
            // No elements left
            return NULL;
        }

        // First element in preorder is the root
        TreeNode* root = new TreeNode(preorder[preStart]);
        int index = inStart;  // Find root in inorder traversal
        while (inorder[index] != root->val) {
            index++;
        }
        // Calculating Number of nodes in left subtree
        int leftSize = index - inStart;
        // Building left subtree
        root->left = build(preorder,inorder, preStart + 1,inStart, index - 1);

        // Building right subtree
        root->right = build(preorder,inorder,preStart+leftSize + 1,index + 1,inEnd);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder,vector<int>& inorder) {

        return build(preorder,inorder,0,0,inorder.size() - 1);
    }
};