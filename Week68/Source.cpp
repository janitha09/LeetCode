#include "Header.h"
bool Solution::isToeplitzMatrix(vector<vector<int>>& matrix) {
	if (matrix.size() <= 1) { return false; }
	for (int i = 0; i < matrix.size() -1; i++) {
		for (int j = 0; j < matrix[0].size() - 1;j++) {
			if (matrix[i][j] != matrix[i + 1][j + 1]) { //don't need to do an and and
				return false;
			}
		}
	}
	return true;
}