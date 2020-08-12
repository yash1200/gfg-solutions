#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,sum=0;
		cin>>n;
		vector<int> a(n),b(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<int>());
		for(int i=0;i<n;i++)
			sum+=a[i]*b[i];
		cout<<sum<<endl;
	}
	return 0;
}