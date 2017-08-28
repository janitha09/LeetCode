#include "Header.h"
bool Solution::isPossible(std::vector<int>& nums) {

	while (nums.size() > 1) {
		if (nums.at(0) + 1 == nums.at(1)) {
			nums.erase(nums.begin(), nums.begin() + 2);
		}
		else if (nums.at(0) == nums.at(1)) {//remove the duplicate
			nums.erase(nums.begin(), nums.begin() + 1);
		}
		else { //if the first set isn't a sequence done
			return false;

		}
	}
	if (nums.size()==0) return true;
	return false;
}
