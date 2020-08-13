#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll ans=0;
		reverse(s.begin(),s.end());
		for(int i=0;i<s.length();i++)
			ans+=(1<<i)*(s[i]-'0');
		cout<<ans<<endl;
	}
	return 0;
}