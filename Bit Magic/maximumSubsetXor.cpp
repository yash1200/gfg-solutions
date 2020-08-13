#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[100][100]={};
int Xor(int ar[], int a,int n,int i){
	if(i==n)
		return a;
	if(dp[a][i]!=-1)
		return dp[a][i];
	return dp[a][i]=max(Xor(ar,a^ar[i],n,i+1),Xor(ar,a,n,i+1));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
			cin>>ar[i];
		memset(dp,-1,sizeof(dp));
		cout<<Xor(ar,0,n,0)<<endl;
	}
	return 0;
}