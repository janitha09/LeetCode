#include <iostream>
#include "Header.h"

RangeModule::RangeModule() {}
void RangeModule::addRange(int left, int right) {
	RangeNode *rngnd = new RangeNode(left, right);
	if (root == 0) {
		root = rngnd;
	}
	else { 
		if (left < root->lo) {
			root->smChild = rngnd;
			root->maxHi = root->maxHi > rngnd->maxHi ? root->maxHi : rngnd->maxHi; //duplicate
			root->minLo = root->minLo < rngnd->minLo ? root->minLo : rngnd->minLo; //duplicate
		}
		else {
			root->lgChild = rngnd;
			root->maxHi = root->maxHi > rngnd->maxHi ? root->maxHi : rngnd->maxHi; //duplicate
			root->minLo = root->minLo < rngnd->minLo ? root->minLo : rngnd->minLo; //duplicate
		}
	}
}

bool RangeModule::queryRange(int left, int right) {
	if (root == 0) return false;
	if (left >= root->minLo && right < root->maxHi) {//open interval no <=
		return true;
	}
	return false;
}
void RangeModule::removeRange(int left, int right) {
	if (left == root->lo && right == root->hi) {
		root = root->lgChild;
	}
	else if (root->lgChild->lo==left){
		root->lgChild = 0;
		root->maxHi = root->hi;
	}
}
RangeNode* RangeModule::getRoot() {
	return root;
}
