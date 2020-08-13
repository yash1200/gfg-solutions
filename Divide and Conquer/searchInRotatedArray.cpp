#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int bin(vector<int> v, int k){
	int l=0,r=v.size()-1,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(v[mid]==k)
			return mid;
		else if(v[l]<=v[mid])
			if(v[mid]>=k&&v[l]<=k)
				r=mid-1;
			else
				l=mid+1;
		else
			if(v[mid]<=k&&v[r]>=k)
				l=mid+1;
			else
				r=mid-1;
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		cin>>k;
		cout<<bin(v,k)<<endl;
	}
	return 0;
}