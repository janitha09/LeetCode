#include "Header.h"
#include <iostream>
bool Solution::isIdealPermutation(vector<int> & A) {
	/*for (int i = 0; i < A.size(); ++i) {
		if (abs(A[i] - i) > 1) {
			return false;
		}
	}*/
	for (int j = 0; j < A.size()-1; ++j) {
		if (abs(A[j] - A[j + 1]) == 1) return true;
	}
	//return true;
	return false;
}
