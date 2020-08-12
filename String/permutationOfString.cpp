#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
set<string> s;
void perm(string a,int l,int r){
	if(l==r){
		s.insert(a);
		return;
	}
	for(int i=l;i<=r;i++){
		swap(a[i],a[l]);
		perm(a,l+1,r);
		swap(a[i],a[l]);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		s.clear();
		string str;
		cin>>str;
		perm(str,0,str.length()-1);
		for(auto itr=s.begin();itr!=s.end();++itr)
			cout<<*itr<<" ";
		cout<<endl;
	}
	return 0;
}