#include "Header.h"

vector<int> Solution::selfDividingNumbers(int left, int right) {
	vector<int> result;
	if (left == 0 || right == 0 || left > right) {
		return result;
	}
	if (left == right) {
		result.push_back(left);
	}
	return result;
}