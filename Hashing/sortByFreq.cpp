#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		map<int,int> m;
		map<int,vector<int>> a;
		for(int i=0;i<n;i++){
			cin>>x;
			m[x]++;
		}
		for(auto itr:m){
			a[itr.second].push_back(itr.first);
		}
		for(auto itr=a.rbegin();itr!=a.rend();++itr){
			for(int j=0;j<itr->second.size();j++){
				int i=itr->first;
				while(i--)
					cout<<itr->second[j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}