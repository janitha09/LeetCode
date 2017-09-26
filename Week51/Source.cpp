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
		if (connectedComponents[edge.at(0)] == 0) { //dpends on an order
			connectedComponents[edge.at(0)] = edge.at(0); //set it to the first;
		}
		if (connectedComponents[edge.at(1)] == 0) {
			connectedComponents[edge.at(1)] = edge.at(0); //the firest edge - you don't inspect;

		}
		if (connectedComponents[edge.at(1)] > connectedComponents[edge.at(0)]) {
			connectedComponents[edge.at(1)] = connectedComponents[edge.at(0)];
			edge.clear();
		}
		else if (connectedComponents[edge.at(0)] > connectedComponents[edge.at(1)]) {
			connectedComponents[edge.at(0)] = connectedComponents[edge.at(1)];
			edge.clear();
		}
		//else if (connectedComponents[edge.at(1)] != 0) {//set the first element in the edge to the second element
		//	connectedComponents[edge.at(0)] = connectedComponents[edge.at(1)]; //set it to the first;
		//	edge.clear();
		//}
		else {
			break;
		}
	}
	return edge;
}

int * Solution::getConnectedComponents() {
	return connectedComponents;
}
