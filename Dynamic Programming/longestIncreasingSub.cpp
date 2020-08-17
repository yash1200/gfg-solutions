#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int dp[n]={1};
        for(int i=1;i<n;i++){
            dp[i]=1;
            for(int j=0;j<i;j++)
                if(v[i]>v[j]&&dp[i]<dp[j]+1)
                    dp[i]=dp[j]+1;
        }
        cout<<*max_element(dp,dp+n)<<endl;
    }
	return 0;
}