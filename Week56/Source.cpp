#include "Header.h"
int Solution::smallestDistancePair(vector<int>& pair, int k) {
	if (pair.size() < 2) {
		return 0;
	}
	std::sort(pair.begin(), pair.end());
	vector<int> difference;
	for (int i = 0; i < pair.size()-1; i++) { 
		//the difference between adjcent numbers is the smallest when sorted
		difference.push_back(pair.at(i + 1) - pair.at(i));
	}
	std::sort(difference.begin(), difference.end());
	if (k > difference.size() - 1) {
		//since k can be bigger than the numbers you need all permutations
		k = difference.size() - 1;
	}
	return difference.at(k-1);
}