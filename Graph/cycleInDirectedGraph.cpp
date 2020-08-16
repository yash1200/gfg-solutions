bool dfsUtil(vector<int>adj[], vector<int>&visited, vector<int>&visited_stack, int v){
    if(visited[v] == 1 && visited_stack[v] == 1){
        return true;
    }
    
    visited[v] = 1;
    visited_stack[v] = 1;
    int n = adj[v].size();
 
    for(int i=0; i<n; i++){
        int vertex = adj[v][i];
        if(dfsUtil(adj, visited, visited_stack, vertex))
            return true;
    }
    visited_stack[v] = 0;
    return false;
 
}
 
bool isCyclic(int V, vector<int> adj[])
{
    // DFS over the graph with a visitied array
    vector<int>visited(V, 0);
 
    for(int i=0; i<V; i++){
        if(visited[i] == 0){
            vector<int>visited_stack(V, 0);
            if(dfsUtil(adj, visited, visited_stack, i))
            return true;
        }
    }
 
    return false;
}