#include <bits/stdc++.h> 
void makezero(vector<vector<int>> &matrix, int n, int m, int row, int col){
	for(int i = 0; i < m; i++){
		matrix[row][i] = 0;
	}

	for(int i = 0; i < n; i++){
		matrix[i][col] = 0;
	}
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	vector<pair<int, int>> vec;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(matrix[i][j] == 0){
				vec.push_back({i,j});
			}
		}
	}
	for(auto i : vec){
		makezero(matrix, n, m, i.first, i.second);
	}
	return matrix;
}