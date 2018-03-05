#include "Header.h"
#include <cmath>
#include <limits>
int Solution::minDiffInBST(TreeNode* root) {
	if (root == 0) return numeric_limits<int>::max();
	int diffchild = minDiffInBST(root->left);
	if (diffchild == numeric_limits<int>::max() && root->left  == 0) {
		return diffchild;
	}else {
		int diff = root->val - root->left->val;
		return fmin(diff, diffchild);
	}
	
	//return 0;
	//int diff = (root->val - root->left->val) < 0 ? 0 : root->val - value; //if the val is negative difference is always positive -3 is smaller than -2 I think
	//int min = fmin(root->val, value);
	//return min;
	//if (root->left==0 && root->right==0) {
	//	return root->val;
	//}

	// int a1 = abs(root->left->val - root->val);
	// int a2 = abs(root->left->left->val - root->val);
	// int a3 = abs(root->left->val - root->left->left->val);
	// return fmin(fmin(a1,a2),a3);
}
