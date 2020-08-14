#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
vector<int> v;

void bst(Node* root){
    if(root==NULL)
        return;
    bst(root->left);
    v.push_back(root->data);
    bst(root->right);
}
bool isBST(Node* root) {
    bool flag=true;
    v.clear();
    bst(root);
    for(int i=1;i<v.size();i++)
        if(v[i]<=v[i-1])
            flag=false;
    return flag;
}
int main(){
	//Implemented Code.
	return 0;
}