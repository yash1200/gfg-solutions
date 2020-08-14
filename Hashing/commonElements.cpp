#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int p,q,r,x;
		bool flag=false;
		cin>>p>>q>>r;
		set<int> a,b,c;
		for(int i=0;i<p;i++){
			cin>>x;
			a.insert(x);
		}
		for(int i=0;i<q;i++){
			cin>>x;
			b.insert(x);
		}
		for(int i=0;i<r;i++){
			cin>>x;
			c.insert(x);
		}
		for(auto itr:a){
			if(b.find(itr)!=b.end()&&c.find(itr)!=c.end()){
				cout<<itr<<" ";
				flag=true;
			}
		}
		if(!flag)
			cout<<-1;
		cout<<endl;
	}
	return 0;
}