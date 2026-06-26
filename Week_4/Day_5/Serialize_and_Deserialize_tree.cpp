class Codec {
public:
    //function for serialization of tree
    void dfs(TreeNode* root, string &s) {
        // Store NULL nodes by 'N'
        if (root == NULL) {
            s += "N,";
            return;
        }
        // Storing  current node value
        s += to_string(root->val) + ",";
        // Serialize left subtree
        dfs(root->left, s);
        // Serialize right subtree
        dfs(root->right, s);
    }
    // Encoding a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";
        dfs(root, s);
        return s;
    }
    //function for deserialization of tree
    TreeNode* build(vector<string>& nodes, int &index) {
        // NULL node found
        if (nodes[index] == "N") {
            index++;
            return NULL;
        }
        // Create current node
        TreeNode* root = new TreeNode(stoi(nodes[index]));
        index++;
        // Build left subtree
        root->left = build(nodes, index);
        // Build right subtree
        root->right = build(nodes, index);
        return root;
    }
    // Decodes encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> nodes;
        string temp = "";
        // Split the string using ',' as delimiter
        for (char ch : data) {
            if (ch == ',') {
                nodes.push_back(temp);
                temp = "";
            }
            else {
                temp += ch;
            }
        }
        int index = 0;
        return build(nodes, index);
    }
};