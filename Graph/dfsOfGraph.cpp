/// Interative Solution.
vector<int> dfs(vector<int> g[], int N)
{
    vector<int> v;
    stack<int> s;
    int i=0;
    s.push(i);
    vector<bool> vis(N,false);
    while(!s.empty()){
        i=s.top();
        s.pop();
        if(vis[i])
            continue;
        v.push_back(i);
        vis[i]=true;
        for(int j=g[i].size()-1;j>=0;j--)
            if(!vis[g[i][j]])
                s.push(g[i][j]);
    }
    return v;

}