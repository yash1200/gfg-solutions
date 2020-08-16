#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    int dp[10001]={0};
    dp[0]=0,dp[1]=1,dp[2]=2;
    for(int i=3;i<10001;i++){
        if(i%2==0)
            dp[i]=1+min(dp[i-1],dp[i/2]);
        else
            dp[i]=dp[i-1]+1;
    }
    while(t--){
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
	return 0;
}