#include "Solution.h"



Solution::Solution()
{
}


Solution::~Solution()
{
}

int Solution::widthOfBinaryTree(TreeNode* root) {
	std::vector<int> sizePerLevel;
	std::queue<TreeNode *> TempHoldForSameLevelNodes;
	int numLeaves = 2;
	std::vector<int> markedLeaves(numLeaves); //you can't hope that the array grows just because you access an element using at. you can grow the vector though probably expensive
	if (root == 0) return 0;
	//single node
	//if (root->left->left && root->left->right == 0 && root->right == 0) return 1;
	if (root->left) {// && root->right==0) 
		TempHoldForSameLevelNodes.push(root->left);
		markedLeaves[0] = 1;
	}
	if (root->right) {
		TempHoldForSameLevelNodes.push(root->right);
		markedLeaves[1] = 1;
	}
	auto firstElementIt = std::find(markedLeaves.begin(), markedLeaves.end(), 1); //probably expensive operations assume N
	ptrdiff_t startIndex = std::distance(markedLeaves.begin(), firstElementIt);

	int one[] = { 1 };
	
	auto firstElementIt = std::find_end(markedLeaves.begin(), markedLeaves.end(), one, one);//probably expensive operations assume N
	ptrdiff_t endIndex = std::distance(markedLeaves.begin(), firstElementIt);

	int maxWidth = std::max((int)(endIndex + 1 - startIndex), 0); //probably a bad cast
	sizePerLevel.push_back(maxWidth); // need to do a single level at a BFS it I want to count horizontal
	
	std::queue<TreeNode *> trackingVector2; //for the second level of the tree
	markedLeaves.resize(2+4); //resize the vector
	while (!TempHoldForSameLevelNodes.empty()) {
		TreeNode * temp = TempHoldForSameLevelNodes.front();
		TempHoldForSameLevelNodes.pop();
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