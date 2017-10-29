#include "Header.h"
int Solution::smallestDistancePair(vector<int>& pair, int k) {
	if (pair.size() < 2) {
		return 0;
	}
	if (k > pair.size() - 1) {
		k= pair.size()-1;
	}
	std::sort(pair.begin(), pair.end());
	return pair.at(k) - pair.at(0);
}