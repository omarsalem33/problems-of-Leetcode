class Solution {
public:
    int ans = 0;
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>adj[n];
        vector<int>visited(n+1,0);
        for(int i = 0; i < edges.size(); ++i){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(adj,visited,source, destination);
        return ans;
    }
    void dfs(vector<int>adj[], vector<int>& vis, int node, int destination){
        vis[node] = 1;
        if(node == destination) ans = 1;
        for(auto& edge: adj[node]){
            if(!vis[edge]){
                dfs(adj,vis,edge,destination);
            }
        }
    }
};