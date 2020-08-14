#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
bool isIdentical(Node *r1, Node *r2)
{
    if(r1==NULL&&r2==NULL)
        return true;
    if(r1!=NULL&&r2!=NULL&&r1->data==r2->data)
        return isIdentical(r1->left,r2->left) & isIdentical(r1->right,r2->right);
    return false;
}
int main(){
	//Implemented Code.
	return 0;
}