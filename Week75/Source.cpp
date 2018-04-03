#include "Header.h"
bool Solution::rotateString(string A, string B) {
	if (A.empty() || B.empty()) return false;
	if (strncmp(A.c_str(), B.c_str(), 1)==0) {
		return true;
	}
	string concat = A + A; //ABAB
	if (concat.at(0) == B.at(0)) {
		return false; //handled above
	}
	if (concat.at(1) == B.at(0)) {
		if (concat.at(2) == B.at(1)) {
			return true;
		}
	}
	//for (string::iterator it_concat = concat.begin(); it_concat != concat.end(); ++it_concat) {
	//	for (string::iterator it = concat.begin(); it != concat.end(); ++it) {
	//		if()
	//	}
	//}
}