#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> v(n),w(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<n;i++)
            cin>>w[i];
        int dp[n+1][s+1]={};
        for(int i=0;i<=n;i++)
            for(int j=0;j<=s;j++)
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(w[i-1]<=j)
                    dp[i][j]=max(v[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
                else
                    dp[i][j]=dp[i-1][j];
        cout<<dp[n][s]<<endl;
    }
	return 0;
}