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
	while (start <= last) {
		int mid = (last + start) / 2;
		if (target == values[mid]) { // 2 !=1
			return mid;
		}
		else if (target > values[mid]) { //2 > 1
			//look in the top half
			start = mid+1;
		}
		else {//less than or equal search the bottom half
				last = mid;
		}
	}
}
