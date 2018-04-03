#include "Header.h"
#include <algorithm>

int Solution::maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
	int ans = 0;
	vector<int> rowMax(grid.size());
	vector<int> colMax(grid[0].size());
	int rowCount = 0;
	int colCount = 0;
	//for (vector<vector<int>>::iterator row = grid.begin(); row != grid.end(); row++,++rowCount) {
	//	rowMax[rowCount] = *max_element(grid[rowCount].begin(), grid[rowCount].end());
	//	for (vector<int>::iterator col = row->begin(); col != row->end(); col++,++colCount) {
	//		colMax[colCount] = *max_element(row->begin(), row->end());
	//	}
	//}
	for (int row = 0; row < grid.size(); ++row) {
		rowMax[row] = *max_element(grid[row].begin(), grid[row].end());
		for (int col = 0; col < grid[row].size(); ++col) {
			colMax[col] = colMax[col]>grid[row][col]?colMax[col]: grid[row][col];
		}
	}

	for (int row = 0; row < grid.size(); ++row) {
		for (int col = 0; col < grid[row].size(); ++col) {
			ans = ans + rowMax[row] > colMax[col] ? colMax[col] : rowMax[row] -grid[row][col];
		}
	}
	return ans;
}