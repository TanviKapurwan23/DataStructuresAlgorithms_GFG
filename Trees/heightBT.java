int height(Node root){
    if(root == NULL){
        return 0;
    } else{
        return Math.max(height(root.left), height(root.right)) + 1;
    }
}