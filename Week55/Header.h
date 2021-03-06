#pragma once
//class B {
//public:
//	B(int j);
//	int &geti();
//private:
//	int &i;
//};
//class A {
//public:
//	A(int i);
//	B &getB();
//private:
//	B &b;
//};

class RangeNode {
public:
	RangeNode() {}
	RangeNode(int left, int right) : lo(left), hi(right), maxHi(right), minLo(lo) {}
	int lo;
	int hi;
	int minLo;
	int maxHi;
	RangeNode *smChild;
	RangeNode *lgChild;
};

class RangeModule {
public:
	RangeModule();
	void addRange(int , int );
	bool queryRange(int , int );
	void removeRange(int , int );
	RangeNode* getRoot();
private:
	RangeNode *root = 0;
	//bool empty; //so you don't have to deal with the = and != operators?
};