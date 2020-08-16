bool is(Node* a, Node* b){
    if(!a&&!b)
        return true;
    if(a&&b&&a->data==b->data)
        return (is(a->left,b->right) & is(a->right,b->left));
    return false;
}

bool isSymmetric(struct Node* root)
{
	return is(root,root);
}