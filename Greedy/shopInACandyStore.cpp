#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int calc(vector<int> v,int k){
	int l=v.size(),sum=0,i=0;
	while(i<l){
		sum+=v[i];
		i++;
		l-=k;
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		sort(v.begin(),v.end());
		cout<<calc(v,k)<<" ";
		reverse(v.begin(),v.end());
		cout<<calc(v,k)<<endl;
	}
	return 0;
}