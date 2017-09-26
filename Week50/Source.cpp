#include "Header.h"
bool Solution::checkValidString(string s) {
	if (s.length() <= 1) {
		return false;
	}
	int openbracketcount = 0;
	int closebracketcount = 0;
	int asteriskcount = 0;
	for (int i=0; i < s.length(); ++i) {
		if (s.at(i) == '(') {
			++openbracketcount;
		}
		else if (s.at(i) == ')') {
			++closebracketcount;
		}
		else if (s.at(i) == '*') {
			++asteriskcount;
		}
	}
	if (openbracketcount - closebracketcount == 0) {
		return true;
	}
	else if (abs(openbracketcount - closebracketcount) == asteriskcount) {
		return true;
	}
	return false;
}