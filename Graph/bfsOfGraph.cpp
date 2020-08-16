vector <int> bfs(vector<int> g[], int N) {
    vector<int> v;
    int i=0;
    vector<bool> vis(N,false);
    queue<int> q;
    q.push(i);
    while(!q.empty()){
        i=q.front();
        q.pop();
        if(vis[i])
            continue;
        v.push_back(i);
        vis[i]=true;
        for(auto a:g[i])
            if(!vis[a])
                q.push(a);
    }
    return v;
}