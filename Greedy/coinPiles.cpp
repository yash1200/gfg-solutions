#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,count=0,a=0,ans=INT_MAX;
		cin>>n>>k;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		sort(v.begin(), v.end());
		for(int i=0;i<n;i++){
			count=a;
			a+=v[i];
			for(int j=i;j<n;j++)
				if(v[j]-v[i]>k)
					count+=v[j]-(v[i]+k);
			ans=min(ans,count);
		}
		cout<<ans<<endl;
	}
	return 0;
}