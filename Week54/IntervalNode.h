#pragma once
class IntervalNode {
	//structs initialize in order 
public:
	IntervalNode();
	IntervalNode(int, int, IntervalNode*, IntervalNode*);
	int left;
	int right;
	int maxRight;
	IntervalNode *biggerChild;
	IntervalNode *smallerChild;
};