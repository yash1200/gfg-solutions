#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i=12,m=INT_MIN,c=0;
		cin>>n;
		while(i--){
			if((1<<i)&n)
				c++;
			else
				m=max(m,c),c=0;
		}
		m=max(m,c);
		if(m>1)
			cout<<0<<endl;
		else
			cout<<1<<endl;
	}
	return 0;
}