#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(1<<k&n)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}