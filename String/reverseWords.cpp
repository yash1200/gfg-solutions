#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		string str,s="";
		cin>>str;
		str+=".";
		int l = str.length(),last=0;
		for(int i=0;i<l;i++){
			if(str[i]=='.'){
				s="."+str.substr(last,i-last)+s;
				last = i+1;
			}
		}
		cout<<s.substr(1)<<endl;
	}
	return 0;
}