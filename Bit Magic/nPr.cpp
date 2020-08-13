#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	ll ar[21]={1};
	for(int i=1;i<=20;i++)
		ar[i]=ar[i-1]*i;
	while(t--){
		int n,r;
		cin>>n>>r;
		cout<<ar[n]/ar[n-r]<<endl;
	}
	return 0;
}