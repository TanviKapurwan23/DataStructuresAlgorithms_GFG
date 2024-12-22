int height(Node *root){
    if(root == NULL){
        return 0;
    } else{
        return max(height(root->left), (root->right)) + 1;
    }
}