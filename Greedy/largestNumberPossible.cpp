#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		string str="";
		if(s==0){
			cout<<-1<<endl;
			continue;
		}
		while(n--){
			if(s>=9)
				str+='9',s-=9;
			else
				str+=to_string(s),s=0;
		}
		if(s==0)
			cout<<str<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}