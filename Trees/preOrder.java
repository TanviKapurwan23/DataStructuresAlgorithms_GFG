void preOrder(Node root){
    if(root != NULL)
    {
        System.Out.print(root.key + " ");
        preOrder(root->left);
        preOrder(root->right);
    }
}