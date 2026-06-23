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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans; // we use a vector to store all level
        if (root == NULL)
        { // if tree is empty then return empty array
            return ans;
        }
        queue<TreeNode *> q; // queue for bfs traversal
        q.push(root);        // we push the root node into queue
        while (q.empty() != 1)
        {                        // while queue is not empty
            int size = q.size(); // no of nodes at current level
            vector<int> level;   // vector to store elements at same level
            for (int i = 0; i < size; i++)
            {                               // processing every node at a level
                TreeNode *temp = q.front(); // taking the front node from queue
                q.pop();
                level.push_back(temp->val); // pushing its value into the level array
                if (temp->left != NULL)
                {                       // if the current node has left node
                    q.push(temp->left); // then push that node into the queue
                }
                if (temp->right != NULL)
                {                        // if the node has right node
                    q.push(temp->right); // then push the right node into the queue
                }
            }
            ans.push_back(level); // pushing  all elements in the level as an array to the ans array
        }
        return ans;
    }
};