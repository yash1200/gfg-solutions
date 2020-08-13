#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b=0;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>a;
			b^=a;
		}
		cout<<b<<endl;
	}
	return 0;
}