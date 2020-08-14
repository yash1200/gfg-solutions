#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

void leftView(Node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    if(root->left!=NULL)
        return leftView(root->left);
    else
        return leftView(root->right);
}

int main(){
	// Implemented Code.
	return 0;
}