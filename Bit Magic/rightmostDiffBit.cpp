#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,c=0;
		cin>>n>>m;
		while(((1<<c)&n)==((1<<c)&m))
			c++;
		cout<<c+1<<endl;
	}
	return 0;
}