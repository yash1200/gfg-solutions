#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c=0;
		cin>>n;
		if(n==0){
			cout<<0<<endl;
			continue;
		}
		while(!((1<<c)&n))
			c++;
		cout<<c+1<<endl;
	}
	return 0;
}