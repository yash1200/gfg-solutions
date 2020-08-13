#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,ans=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			ans^=a;
		}
		cout<<ans<<endl;
	}
	return 0;
}