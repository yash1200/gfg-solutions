#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
map<int,int> m;
void pre(Node* root,int col){
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        pair<Node*,int> p=q.front();
        m[p.second]=p.first->data;
        q.pop();
        if(p.first->left!=NULL)
            q.push({p.first->left,p.second-1});
        if(p.first->right!=NULL)
            q.push({p.first->right,p.second+1});
    }
}
// Method that returns the bottom view.
vector <int> bottomView(Node *root)
{
    m.clear();
    vector<int> v;
    pre(root,0);
    for(auto itr:m)
        v.push_back(itr.second);
    return v;
}
int main(){
    //Implemented Code.
    return 0;
}