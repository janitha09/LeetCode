#include <iostream>
#include "Header.h"

class B {
public:
	B(int j) : i(j) {}
	int geti() { return i; }
	int &getPntri(){ return i; }
private:
	int i;
};
class A {
public:
	A(int i) : b(B(i)) {}
	B getB() { return b; }
	B &getPntrB() { return b; }
private:
	B &b;
};
//B::B(int j) : i(j) {}
//int &B::geti() { return i; }
//
//A::A(int i) : b(B(i)) {}
//B A::getB(){ return b; }

void main() {
	A a = A(2);
	std::cout << a.getB().geti() << std::endl;	
	a.getPntrB() = B(4);
	std::cout << a.getB().geti() << std::endl;
	B b = B(2);
	std::cout << b.geti() << std::endl;
	a.getPntrB().getPntri() = 6;
	std::cout << a.getB().geti() << std::endl;
	a.getB().getPntri() = 6; //probably move semantics
	std::cout << a.getB().geti() << std::endl;
}