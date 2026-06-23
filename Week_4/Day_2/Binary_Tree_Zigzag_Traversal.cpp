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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;   //vector to store levels
        if(root==NULL){
            return ans;
        }
        queue <TreeNode*> q;  //we use similar logic of BFS traversal a queue to store the nodes
        q.push(root);  //we push the current node into queue
        bool flag=true;  //we use a flag variable to change left to right to right to left
        while(q.empty()!=1){
            int size=q.size();
            vector<int> level(size);  //level array to store elements in a level
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();//taking front node from queue 
                q.pop();  
                int index=(flag)?i:(size-1-i);  //we check the value of flag and decide how do we insert elements left to right or vice versa
                level[index]=temp->val;
                if(temp->left!=NULL){ // if left node exists we push left node
                    q.push(temp->left);
                }
                 if(temp->right!=NULL){  //if right node exists then we push right node
                    q.push(temp->right);
                }
            } 
            flag=!flag;  //change the value of flag
            ans.push_back(level);  //pushing each level
        }
        return ans;
    }
};