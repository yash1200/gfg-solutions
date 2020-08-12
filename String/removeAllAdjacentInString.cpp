#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string rem(string str){
	string res=str;
	for(int i=0;i<str.length();i++){
		int j=i+1;
		while(str[i]==str[j])
			j++;
		if(j!=i+1){
			for(int k=i;k<j;k++)
				res[k]=',';
		}
	}
	string a ="";
	for(char x:res)
		if(x!=',')
			a+=x;
	return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		str+=".";
		string res = rem(str);
		while(str.length()!=res.length()){
			str=res;
			res=rem(str);
		}
		cout<<str.substr(0,str.length()-1)<<endl;
	}
	return 0;
}