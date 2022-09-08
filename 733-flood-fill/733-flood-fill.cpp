class Solution {
public:
    
    void solve(vector<vector<int>>& image, vector<vector<bool>>&visited, int n, int m, int sr, int sc, int color, int prev){
        if(sr < 0 || sc < 0 || sr >= n || sc >= m || visited[sr][sc] == true || image[sr][sc] != prev){
            return;
        }
        visited[sr][sc] = true;
        image[sr][sc] = color;
        solve(image, visited, n, m, sr+1, sc, color, prev);
        solve(image, visited, n, m, sr, sc+1, color, prev);
        solve(image, visited, n, m, sr, sc-1, color, prev);
        solve(image, visited, n, m, sr-1, sc, color, prev);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<bool>>visited(n, vector<bool>(m, false));
        solve(image, visited, n, m, sr, sc, color, image[sr][sc]);
        return image;
    }
};