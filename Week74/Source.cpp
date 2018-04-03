#include "Header.h"

int Solution::preimageSizeFZF(int K) {
	int lo = K, hi = 10 * K + 1;
	while (lo < hi) {
		int mi = lo + (hi - lo) / 2;
		int zmi = zeta(mi);
		if (zmi == K) return 5;
		else if (zmi < K) lo = mi + 1;
		else hi = mi;
	}
	return 0;
};

int Solution::zeta(int x) {
	if (x == 0) return 0;
	return x / 5 + zeta(x / 5);
}