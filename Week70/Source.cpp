#include "Header.h"
#include <bitset>
using namespace std;
int Solution::kthGrammar(int N, int K){
	return bitset<32>(K - 1).count() % 2;
}