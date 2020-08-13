#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,l,r;
		cin>>n>>l>>r;
		l--,r--;
		while(l<=r)
			n=n^(1<<(l++));
		cout<<n<<endl;
	}
	return 0;
}