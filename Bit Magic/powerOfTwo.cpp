#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n==0){
			cout<<"NO\n";
			continue;
		}
		if((n&(n-1))==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}