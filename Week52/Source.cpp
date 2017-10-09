#include "Header.h"
//vector<int> Solution::maxSumOfThreeSubarrays(vector<int>& nums, int k) {
//	int n = nums.size(), maxsum = 0;
//	vector<int> sum = { 0 }, posLeft(n, 0), posRight(n, n - k), ans(3, 0);
//	for (int i : nums) sum.push_back(sum.back() + i);
//	// DP for starting index of the left max sum interval
//	for (int i = k, tot = sum[k] - sum[0]; i < n; i++) {
//		if (sum[i + 1] - sum[i + 1 - k] > tot) {
//			posLeft[i] = i + 1 - k;
//			tot = sum[i + 1] - sum[i + 1 - k];
//		}
//		else
//			posLeft[i] = posLeft[i - 1];
//	}
//	// DP for starting index of the right max sum interval
//	// caution: the condition is ">= tot" for right interval, and "> tot" for left interval
//	for (int i = n - k - 1, tot = sum[n] - sum[n - k]; i >= 0; i--) {
//		if (sum[i + k] - sum[i] >= tot) {
//			posRight[i] = i;
//			tot = sum[i + k] - sum[i];
//		}
//		else
//			posRight[i] = posRight[i + 1];
//	}
//	// test all possible middle interval
//	for (int i = k; i <= n - 2 * k; i++) {
//		int l = posLeft[i - 1], r = posRight[i + k];
//		int tot = (sum[i + k] - sum[i]) + (sum[l + k] - sum[l]) + (sum[r + k] - sum[r]);
//		if (tot > maxsum) {
//			maxsum = tot;
//			ans = { l, i, r };
//		}
//	}
//	return ans;
//}

vector<int> Solution::maxSumOfThreeSubarrays(vector<int>& nums, int k) {
	vector<int> sum = { 0 };//element 0 no garbage
	for (int n : nums) sum.push_back(sum.back() + n);
	//int smallestIndex = 0;
	vector<int> ans;
	for (int i = k; i < sum.size() - 1; i++) {
		if (sum[i + 1] - sum[i] > sum[i]) {
			ans.push_back(i);
		}
		else {
			ans.push_back(i - 1);
		}
	}
	return ans;
}
