#include "Header.h"
int Solution::maximumSwap(int num) {
	std::vector<int> digits;
	int numcopy = num;
	while (num > 0) {
		digits.push_back(num % 10);
		num /= 10;
	}
	if (digits.size() == 1) return numcopy;
	else if (std::adjacent_find(digits.begin(), digits.end(), std::not_equal_to<int>()) == digits.end())
	{
		return numcopy;
	}
	else {
		int swappednum = 0;
		int templargest = 0;
		//std::max_element(digits.begin(), digits.end()));
		for (int i = digits.size() - 1; i > 0; i--) {
			for (int j)
			if (digits.at(i) < digits.at(i - 1)) { //MSD is smaller so swap works for 2 digits only
				templargest = digits.at(i - 1);// *10 ^ i; //shift it 
				swappednum += templargest * 10^i;
				swappednum += digits.at(i) * 1;
			}
			else {
				return numcopy;
			}
		}
		return swappednum;
		//return numcopy;

	}
	return 0;
	//http://cs.indstate.edu/~spitla/abstract2.pdf
}