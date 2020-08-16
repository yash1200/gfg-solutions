bool isCyclic(vector<int> g[], int V)
{
    int i=0,p;
    vector<int> vis(V,false);
    queue<pair<int,int>> q;
    for(int u=0;u<V;u++)
        if(!vis[u]){
            q.push({u,-1});
            while(!q.empty()){
                i=q.front().first;
                p=q.front().second;
                q.pop();
                if(vis[i])
                    continue;
                vis[i]=true;
                for(auto a:g[i])
                if(!vis[a])
                    q.push({a,i});
                else if(a!=p)
                    return true;
            }
        }
    return false;
}