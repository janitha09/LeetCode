#include "Header.h"
int Solution::maximumSwap(int num) {
	std::vector<int> digits;
	int numcopy = num;
	while (num > 0) {
		digits.push_back(num % 10);
		num /= 10;
	}
	if (digits.size()==1) return numcopy;
	else if (std::adjacent_find(digits.begin(), digits.end(), std::not_equal_to<int>()) == digits.end())
	{
		return numcopy;
	}
	else {//no restriction on number return sorted string
		if (digits.at(1) < digits.at(0) ) { //MSD is smaller so swap
			int swappednum = 0;
			swappednum += digits.at(0) * 10;
			swappednum += digits.at(1) * 1;
			return swappednum;
		}
		else {
			return numcopy;
		}
	}
	return 0;
}