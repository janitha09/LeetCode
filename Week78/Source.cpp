#include "Header.h"
bool Solution::xorGame(vector<int>& nums) {
	int x = 0;
	for (int n : nums) x = x xor n;
	return x;
}