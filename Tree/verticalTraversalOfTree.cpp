#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
map<int,vector<int>> m;
void pre(Node* root) {
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        pair<Node*,int> p=q.front();
        m[p.second].push_back(p.first->data);
        q.pop();
        if(p.first->left!=NULL)
            q.push({p.first->left,p.second-1});
        if(p.first->right!=NULL)
            q.push({p.first->right,p.second+1});
    }
}
// root: root node of the tree
vector<int> verticalOrder(Node *root)
{
    m.clear();
    vector<int> v;
    pre(root);
    for(auto itr:m)
        for(int a:itr.second)
            v.push_back(a);
    return v;
}
int main(){
	//Implemented Code.
	return 0;
}