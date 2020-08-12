#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,count=0;
		cin>>n>>k;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++){
			if(v[i]<k)
				k-=v[i],count++;
		}
		cout<<count<<endl;
	}
	return 0;
}