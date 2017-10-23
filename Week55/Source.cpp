#include <iostream>
#include "Header.h"

RangeModule::RangeModule() {}
void RangeModule::addRange(int left, int right) {
	RangeNode *rngnd = new RangeNode(left, right);
	if (root == 0) {
		root = rngnd;
	}

}
bool RangeModule::queryRange(int left, int right) {
	if (root != 0) {
		if (right == root->hi && left == root->lo) {
			return true;
		}
	}
	return false;
}
void RangeModule::removeRange(int left, int right) {
	if (left == root->lo && right == root->hi) {
		root = 0;
	}
}
