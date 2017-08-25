#include "Solution.h"



Solution::Solution()
{
}


Solution::~Solution()
{
}

int Solution::widthOfBinaryTree(TreeNode* root) {
	std::vector<int> sizePerLevel;
	std::queue<TreeNode *> trackingVector;
	if (root == 0) return 0;
	//single node
	//if (root->left->left && root->left->right == 0 && root->right == 0) return 1;
	if (root->left) {// && root->right==0) 
		trackingVector.push(root->left);
	}
	if (root->right) {
		trackingVector.push(root->right);
	}
	sizePerLevel.push_back((int)trackingVector.size()); // need to do a single level at a BFS it I want to count horizontal
	std::queue<TreeNode *> trackingVector2; //for the second level of the tree
	while (!trackingVector.empty()) {
		TreeNode * temp = trackingVector.front();
		trackingVector.pop();
		//The node from the previous node might still be there

		if (temp->left) {
			trackingVector2.push(temp->left);
		}
		if (temp->right) {
			trackingVector2.push(temp->right);
		}
	}
	sizePerLevel.push_back((int)trackingVector2.size()); // need a way to blank fill things if you don't know the number of leaves cannot blank fill
	auto largestElement = std::max_element(std::begin(sizePerLevel), std::end(sizePerLevel));
	return *largestElement;
	//2 nodes - this is not a distance
	//if (root->left && root->right) return 2;
	//if (root->right->right) return 1;
	//if (root->left->left) return 1;
}