#include "Header.h"
#include "IntervalNode.h"
#include "IntervalTree.h"
vector<int> Solution::fallingSquares(vector<pair<int, int>>& positions) {
	vector<int> ans;
	int height = positions.at(0).second;
	ans.push_back(height);
	return ans;
}
IntervalTree::IntervalTree(int lo, int hi) : left(lo), right(hi),root(IntervalNode(left, right, 0, 0)){}
IntervalTree::IntervalTree(IntervalNode& node) : root(node){ 
	//root = IntervalNode(left, right, 0, 0);
}

void IntervalTree::addNode(IntervalNode &parent, IntervalNode &node) {
	//can't refer to the root everytime needs to change, need to recurse
	if (node.left <= parent.left){
		if (parent.smallerChild == 0) {
			parent.smallerChild = &node;
			parent.maxRight < node.right ? parent.maxRight = node.right : parent.maxRight;
		}
		else {
			addNode(*parent.smallerChild, node);
		}

	}
	else if (node.left > parent.left) {
		if (parent.biggerChild == 0) {
			parent.biggerChild = &node;
			parent.maxRight < node.right ? parent.maxRight = node.right : parent.maxRight;
		}
		else {
			addNode(*parent.biggerChild, node);
		}
	}
}
IntervalNode &IntervalTree::getRoot() {
	return root;
}
IntervalNode::IntervalNode(int lo, int hi, IntervalNode* small, IntervalNode* large) : left(lo), right(hi), maxRight(hi), smallerChild(small), biggerChild(large) {}

//not in the initialization list so a default constuctor is needed
IntervalNode::IntervalNode() {}