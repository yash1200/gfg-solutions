#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int k,n,max1=INT_MIN,min1=INT_MAX;
		cin>>k>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
			max1=max(max1,v[i]);
			min1=min(min1,v[i]);
		}
		int ans = max1-min1,mid=(max1+min1)/2;
		max1=INT_MIN;
		min1=INT_MAX;
		for(int i=0;i<n;i++){
			if(v[i]<=mid)
				v[i]+=k;
			else
				v[i]-=k;
			max1=max(max1,v[i]);
			min1=min(min1,v[i]);
		}
		cout<<min(ans,max1-min1)<<endl;
	}
	return 0;
}