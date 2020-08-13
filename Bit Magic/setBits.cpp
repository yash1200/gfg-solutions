#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i=31,c=0;
		cin>>n;
		while(i--)
			if((1<<i)&n)
				c++;
		cout<<c<<endl;
	}
	return 0;
}