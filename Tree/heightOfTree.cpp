// return the Height of the given Binary Tree
int height(Node* root)
{
    if(root==NULL)
        return 0;
    return 1+max(height(root->left),height(root->right));
}