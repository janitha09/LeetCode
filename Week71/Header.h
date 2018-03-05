#pragma once

 //Definition for a binary tree node
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(0), right(0) {}
};
class Solution {
public:
	int minDiffInBST(TreeNode* root);
};
