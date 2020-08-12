#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string rem(string str){
	bool flag = true;
	stack<char> s;
	for(char a : str){
		if(a=='{'|| a=='['||a=='(')
			s.push(a);
		else if(a=='}')
			if(s.size()&&s.top()=='{')
				s.pop();
			else
				flag=false;
		else if(a==']')
			if(s.size()&&s.top()=='[')
				s.pop();
			else
				flag=false;
		else if(a==')')
			if(s.size()&&s.top()=='(')
				s.pop();
			else
				flag=false;
	}
	if(s.size()==0&&flag)
		return "balanced";
	return "not balanced";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<rem(str)<<endl;
	}
	return 0;
}