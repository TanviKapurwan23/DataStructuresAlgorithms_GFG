void preOrder(Node *root){
    if(root != NULL){
        cout<<(root->key)<<" ";
        preOrder(root->left);
        preOrder(root->right);

    }
}


class Solution {
  public:

    // Function to return a list containing the preorder traversal of the tree.
    vector<int> preorder(Node* root) {
    vector<int> result; // To store the preorder traversal result.
    if (root != NULL) {
        result.push_back(root->data); // Add the root's data to the result.
        
        vector<int> leftSubtree = preorder(root->left); // Get preorder of the left subtree.
        vector<int> rightSubtree = preorder(root->right); // Get preorder of the right subtree.

        // Combine the results.
        result.insert(result.end(), leftSubtree.begin(), leftSubtree.end());
        result.insert(result.end(), rightSubtree.begin(), rightSubtree.end());
    }
    return result;
    }
};