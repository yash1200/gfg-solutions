#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,x;
		cin>>n>>m;
		map<int,int> a;
		vector<int> b(m);
		for(int i=0;i<n;i++){
			cin>>x;
			a[x]++;
		}
		for(int i=0;i<m;i++)
			cin>>b[i];
		for(int x:b){
			int i=a[x];
			while(i--)
				cout<<x<<" ";
			a.erase(x);
		}
		for(auto itr=a.begin();itr!=a.end();++itr){
			int i=itr->second;
			while(i--)
				cout<<itr->first<<" ";
		}
		cout<<endl;
	}
	return 0;
}