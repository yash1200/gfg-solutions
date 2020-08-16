int c=0;
void count(Node* a){
    if(a->left==NULL&&a->right==NULL){
        c++;
        return;
    }
    if(a->left)
        count(a->left);
    if(a->right)
        count(a->right);
}
int countLeaves(Node* root)
{
    c=0;
    count(root);
    return c;
}