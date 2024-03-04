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

//learnt approach - https://www.youtube.com/watch?v=M65xBewcqcI
#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	int col0 = -1;
    for(int i = 0 ; i < n; i++){
        if(matrix[i][0] == 0){
            col0 = 0;
        }
        for(int j = 1; j < m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }
    for(int i = n-1 ; i >= 0 ; i--){
        for(int j = m-1; j >= 1; j--){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
        if(col0 == 0)   matrix[i][0] = 0;
    }
    return matrix;
}