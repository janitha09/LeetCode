#include "Header.h"
vector<vector<int>> Solution::candyCrush(vector<vector<int>>& board) {
	//if (board.size() < 3 || board.at(0).size() < 3) {
	//	return board;
	//}
	//for (int row = 0; row < board.size() - 2; row++) {
	//	if (board.at(row).at(0) == board.at(row + 1).at(0) == board.at(row + 2).at(0)) {
	//		board.at(row).at(0) = board.at(row + 1).at(0) = board.at(row + 2).at(0) = 0;
	//	}
	//}
	//for (int col = 0; col < board.at(0).size() - 2; col++) {
	//	if (board.at(0).at(col) == board.at(0).at(col + 1) == board.at(0).at(col + 2)) {
	//		board.at(0).at(col + 0) = board.at(0).at(col + 1) = board.at(0).at(col + 2) = 0;
	//	}
	//}
	if (board.at(0).size() >= 1) {
		int temp = board.at(0).at(0);
		if (temp == board.at(0).at(1)) {
			board.at(0).at(1) = 0;
			if (board.at(0).size() >= 2) {
				if (temp == board.at(0).at(2)) {
					board.at(0).at(2) = 0;
				}
			}
			board.at(0).at(0) = 0;
		}
		
	}
	return board;
}