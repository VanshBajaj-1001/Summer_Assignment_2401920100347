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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr){  //if tree is empty then we return a null pointer
            return nullptr;
        }
        queue<TreeNode*> q;// we use a queue to traverse the nodes of a tree in a sequence using the BFS traversal technique
        q.push(root); //we start from root node by pushing it in queue
        while(q.empty()!=1){
            TreeNode* temp=q.front();  //we select the node whose left and right children are to be swapped
            q.pop();  //we remove that node from queue
            swap(temp->left,temp->right);  //we swap the left and right children of the given node
            if(temp->left!=NULL){  //if the node has left child 
                q.push(temp->left);  // we push th e left child into the queue
            }
             if(temp->right!=NULL){ //if the node has a right child
                q.push(temp->right);  //we push the right child into the queue
            }
        }
        return root;
    }
};