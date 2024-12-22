void printkDist(Node *root, int k){
    if(root == NULL) return 0;
    if(k == 0) {
        cout<<(root->key)<<" ";
    }else{
        printkDist(root->left, k-1);
        printkDist(root->right, k-1);
    }
}