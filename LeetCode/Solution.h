#pragma once
#include <queue>
#include <vector>
#include <algorithm>
//* Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(0), right(0) {}
};
class Solution
{
public:
	Solution();
	~Solution();
	int widthOfBinaryTree(TreeNode* root);
};



