#include<bits/stdc++.h>
using namespace std;
int n,m,k,a;
void cal(int x,int y,vector<vector<int>> &ar){
    ar[x][y]=k;
    if(x>0&&ar[x-1][y]==a)
        cal(x-1,y,ar);
    if(x<n-1&&ar[x+1][y]==a)
        cal(x+1,y,ar);
    if(y>0&&ar[x][y-1]==a)
        cal(x,y-1,ar);
    if(y<m-1&&ar[x][y+1]==a)
        cal(x,y+1,ar);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>v[i][j];
        cin>>x>>y>>k;
        a=v[x][y];
        cal(x,y,v);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cout<<v[i][j]<<" ";
        cout<<endl;
    }
	return 0;
}