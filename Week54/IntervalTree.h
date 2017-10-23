#pragma once
#include "IntervalNode.h"
class IntervalTree {
public:
	IntervalTree(int, int);
	IntervalTree(IntervalNode&);
	//IntervalTree(IntervalNode node);
	void addNode(IntervalNode&, IntervalNode&);
	IntervalNode &getRoot();
	//root = IntervalNode(left, right,0,0);
private:
	IntervalNode root/* = IntervalNode(left,right,0,0)*/;
	int left;
	int right;
};