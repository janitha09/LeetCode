#include "Header.h"

Solution::Solution(const int arrLen) {
	connectedComponents = new int[arrLen]();
	//connectedComponents[arrLen] = { 0 };
}
Solution::~Solution() {
	delete [] connectedComponents;
}
vector<int> Solution::findRedundantConnection(vector<vector<int>>& edges) {
	vector<int> edge;
	if (edges.size() <= 1) return edge;

	for (int edgeIndex = 0; edgeIndex <= edges.size() - 1; ++edgeIndex) {
		edge = edges.at(edgeIndex);
		int smallestNode = edge.at(0) > edge.at(1) ? edge.at(1) : edge.at(0);
		if (connectedComponents[smallestNode] == 0) {
			connectedComponents[edge.at(0)] = smallestNode;
			connectedComponents[edge.at(1)] = smallestNode;
			edge.clear();
		}
		else if (connectedComponents[edge.at(0)] != 0 && connectedComponents[edge.at(1)] !=0){
			return edge;
		}
		else {
			connectedComponents[edge.at(0)] = connectedComponents[smallestNode]; //there is one overwrite
			connectedComponents[edge.at(1)] = connectedComponents[smallestNode];
			edge.clear();
		}

	}
	return edge;
}

int * Solution::getConnectedComponents() {
	return connectedComponents;
}
