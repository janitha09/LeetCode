#pragma once
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	Solution(const int);
	~Solution();
	vector<int> findRedundantConnection(vector<vector<int>>& edges);
	int* getConnectedComponents();
private:
	int *connectedComponents;
};