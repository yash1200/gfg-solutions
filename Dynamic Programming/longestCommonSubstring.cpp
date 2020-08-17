#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,res=INT_MIN;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int ar[n+1][m+1];
        for(int i=0;i<=n;i++)
            for(int j=0;j<=m;j++)
                if(i==0||j==0)
                    ar[i][j]=0;
                else if(a[i-1]==b[j-1])
                    ar[i][j]=1+ar[i-1][j-1],res=max(res,ar[i][j]);
                else
                    ar[i][j]=0;
        cout<<max(0,res)<<endl;
    }
	return 0;
}