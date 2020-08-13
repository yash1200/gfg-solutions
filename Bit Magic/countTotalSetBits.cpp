#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	int ar[1001]={0};
	for(int i=1;i<1001;i++){
		int j=10;
		while(j--){
			if((1<<j)&i)
				ar[i]++;
		}
		ar[i]+=ar[i-1];
	}
	while(t--){
		int n,i=1;
		cin>>n;
		cout<<ar[n]<<endl;
	}
	return 0;
}