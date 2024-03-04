class Solution {
public:
    void makezero(vector<vector<int>> &matrix, int n , int m, int row, int col){
        for(int i = 0; i < m; i++){
            matrix[row][i] = 0;
        }
        for(int i = 0; i < n; i++){
            matrix[i][col] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> vec;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    vec.push_back({i,j});
                }
            }
        }
        for(auto i : vec){
            makezero(matrix, n , m , i.first, i.second);
        }
        
    }
};