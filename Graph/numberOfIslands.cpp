void dfs(int i,int j,int n,int m, vector<vector<bool>> &vis,vector<int> v[]){
    vis[i][j]=true;
    if(i<n-1&&v[i+1][j]==1&&!vis[i+1][j])
        dfs(i+1,j,n,m,vis,v);
    if(i>0&&v[i-1][j]==1&&!vis[i-1][j])
        dfs(i-1,j,n,m,vis,v);
    if(j<m-1&&v[i][j+1]==1&&!vis[i][j+1])
        dfs(i,j+1,n,m,vis,v);
    if(j>0&&v[i][j-1]==1&&!vis[i][j-1])
        dfs(i,j-1,n,m,vis,v);
    if(i>0&&j>0&&v[i-1][j-1]==1&&!vis[i-1][j-1])
        dfs(i-1,j-1,n,m,vis,v);
    if(i>0&&j<m-1&&v[i-1][j+1]==1&&!vis[i-1][j+1])
        dfs(i-1,j+1,n,m,vis,v);
    if(i<n-1&&j>0&&v[i+1][j-1]==1&&!vis[i+1][j-1])
        dfs(i+1,j-1,n,m,vis,v);
    if(i<n-1&&j<m-1&&v[i+1][j+1]==1&&!vis[i+1][j+1])
        dfs(i+1,j+1,n,m,vis,v);
}

int findIslands(vector<int> v[], int n, int m) {
    int c=0;
    vector<vector<bool>> vis(n,vector<bool>(m,false));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(v[i][j]==1&&!vis[i][j])
                dfs(i,j,n,m,vis,v),c++;
    return c;
}