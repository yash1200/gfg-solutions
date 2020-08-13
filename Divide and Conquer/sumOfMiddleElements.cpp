#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n),b(n),c;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		int i=0,j=0;
		while(i<n&&j<n){
			if(a[i]<=b[j])
				c.push_back(a[i++]);
			else
				c.push_back(b[j++]);
		}
		while(i<n)
			c.push_back(a[i++]);
		while(j<n)
			c.push_back(b[j++]);
		cout<<c[n-1]+c[n]<<endl;
	}
	return 0;
}