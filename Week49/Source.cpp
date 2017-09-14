#include "Header.h"
int Solution::findNumberOfLIS(vector<int>& nums) {
	int increasingSequences = 1;
	if (nums.size() == 0) {
		return 0;
	}
	if (nums.size() == 1) {
		return increasingSequences;
	}
	bool increasing = false;

	for (int i=0; i < nums.size()-1 ; ++i){
		
			if (nums.at(i) > nums.at(i + 1)) {
				increasing = false;
				++increasingSequences;
			}
			else if (nums.at(i) == nums.at(i + 1)) {
				increasing = false;
				++increasingSequences;
			}
			else if (nums.at(i) < nums.at(i + 1)) {
				increasing = true;
			}
	}
	return increasingSequences;
}