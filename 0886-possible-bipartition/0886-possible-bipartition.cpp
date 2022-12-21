class Solution {
public:
    
    bool isBipartite(vector<vector<int>>& adj, int n, int node, vector<int>& color){
        queue<int>q;
        q.push(node);
        color[node] = 1;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            for(auto y : adj[x]){
                if(color[y] == color[x]){
                    return false;
                }
                if(color[y] == -1){
                    color[y] = 1-color[x];
                    q.push(y);
                }
            }
        }
        return true;
    }
    
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>>adj(n+1);
        for(int i = 0; i < dislikes.size(); i++){
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        vector<int>color(n+1, -1);
        for(int i = 1; i < n+1; i++){
            if(color[i] == -1){
                if(!isBipartite(adj, n, i, color)){
                    return false;
                }
            }
        }
        return true;
    }
};