#include "Header.h"
#include <string>
#include <ctype.h>
vector<string> Solution::letterCasePermutation(string S) {
	vector<string> res;
	for (string::iterator it = S.begin(); it < S.end(); ++it) {
		if (isdigit(*it)) {
			res.push_back(*it);
		}
	}
	return res;
}