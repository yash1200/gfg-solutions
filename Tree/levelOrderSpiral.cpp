int height(Node *root){
    if(!root) return 0;
    return 1+max(height(root->left), height(root->right));
}
void print(Node *root, int h, int level, bool flag){
    if(level==h){
        cout<<root->data<<" ";
        return;
    }
    if(flag){
        if(root->left) print(root->left, h, level+1, flag);
        if(root->right) print(root->right, h, level+1, flag);
    }
    else{
        if(root->right) print(root->right, h, level+1, flag);
        if(root->left) print(root->left, h, level+1, flag);
    }
}
void printSpiral(Node *root){
    int h = height(root);
    bool flag=false;
    for(int i=0;i<h;i++){
        //cout<<flag<<endl;
        print(root, i, 0, flag);
        flag=!flag;
    }
}