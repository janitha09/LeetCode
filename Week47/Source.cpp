#include "Header.h"
//m row, n column

int Solution::findKthNumber(int m, int n, int k) {
	if (m == 0 || n == 0 || k == 0) {//everything starts at 1
		return 0;
	}
	if (m == 1 && n >= 1) { //single row 1,2,3,4,5
		if (n > k) return k;
	
	}
	if (n == 1 && m >= 1) { //single column
		if (m > k) return k;
	}
	if (m == 2 && n == 2) {

	}
	//mxn //top left corner is smallest
	return 0;
	
}
int Solution::BinarySearchFindIndex(int values [], int target, int size) {
	int start = 0;
	int last = size-1;
	if (last == 0) {
		if (target == values[0]) {//found
			return 0;
		}else{//not found
			return 10;//rubbish number
		}
	}
	//find the middle
	//you have to loop if it's greater than the start moves if it's less than the end has to move tempted to recurse
	while (start < last) {
		int mid = (last - start) / 2; //(1-0/2) = 0.5 -> 0
		if (target > values[mid]) {
			if (target == values[mid + 1]) {//reound down
				return mid + 1;
			}
			else {//look in the top half
				start = mid + 1;
			}
		}
		else {//less than or equal I think search the bottom half
			if (target == values[mid]) {
				return mid;
			}
			else {
				last = mid + 1;
			}
		}
	}
}
