#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c=0,i=31;
		cin>>a>>b;
		while(i--)
			if(((1<<i)&a)!=((1<<i)&b))
				c++;
		cout<<c<<endl;
	}
	return 0;
}