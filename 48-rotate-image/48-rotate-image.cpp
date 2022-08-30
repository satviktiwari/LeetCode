class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>temp = matrix;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                temp[j][i] = matrix[i][j];
            }
        }
        for(int i = 0; i < temp.size(); i++){
            reverse(temp[i].begin(), temp[i].end());
        }
        matrix = temp;
    }
};