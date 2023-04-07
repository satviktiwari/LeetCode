class Solution {
public:
    
    void dfs(vector<vector<int>>& grid, int a, int b, int n, int m){
        if(a < 0 || b < 0 || a >= n || b >= m || grid[a][b] != 1){
            return;
        }
        grid[a][b] = 0;
        dfs(grid, a+1, b, n, m);
        dfs(grid, a, b+1, n, m);
        dfs(grid, a-1, b, n, m);
        dfs(grid, a, b-1, n, m);
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i == 0 || j == 0 || i == n-1 || j == m-1){
                    if(grid[i][j] == 1){
                        dfs(grid, i, j, n, m);
                    }
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    ans++;
                }
            }
        }
        return ans;
    }
};