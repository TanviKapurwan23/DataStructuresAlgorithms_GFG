void inorder(Node root){
    if(root != NULL){
        inorder(root.left);
        System.Out.print(root.key + "");
        inorder(root.right);
    }
}