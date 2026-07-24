class Solution {
public:
int c = 0;
void dfs(vector<vector<int>>&adj,vector<int>&vis, int i)
{
    vis[i]=1;
    for(int j = 0; j < adj[i].size(); j++)
    {
        if(vis[adj[i][j]]==0)
        {
            dfs(adj, vis, adj[i][j]);
        }
    }

}
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<vector<int>>adj(n);
        int siz = connections.size();
        if(siz<n-1)
        return -1;
        for(int i = 0; i < connections.size(); i++)
        {
            int x = connections[i][0];
            int y = connections[i][1];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        vector<int>vis(n,0);
        for(int  i = 0; i < n; i++)
        {
            if(vis[i]==0)
            {
                dfs(adj,vis,i);
                c++;
            }
        }
        return c - 1;
    }
};