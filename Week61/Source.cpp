#include "Header.h"
vector<int> Solution::dailyTemperatures(vector<int>& temperatures) {
	vector<int> result;
	if (temperatures.size() == 1) {
		result.push_back(0);
	}
	/*else if (temperatures.size() == 2) {
		int diff = temperatures[1] > temperatures[0] ? temperatures[1] - temperatures[0] : 0;
		result.push_back(diff);
		result.push_back(0);
	}*/
	else if (temperatures.size() == 2) {
		for (int i = 0; i < temperatures.size()-1; ++i) {
			if (temperatures.at(i) >= temperatures.at(i + 1)) {
				result.push_back(0);
			}
			else { //at the end
				result.push_back(temperatures.at(i + 1) - temperatures.at(i));
			}
		}
		//add the last one
		result.push_back(0);
	}
	//else if (temperatures.size() == 3) {
	//	int diff10 = temperatures[1] > temperatures[0] ? temperatures[1] - temperatures[0] : 0;
	//	int diff20 = temperatures[2] > temperatures[0] ? temperatures[2] - temperatures[0] : 0;
	//	int diff21 = temperatures[2] > temperatures[1] ? temperatures[2] - temperatures[1] : 0;
	//	
	//	result.push_back(diff20 > diff10 ? diff20 : diff10);
	//	result.push_back(diff21);
	//	result.push_back(0); //last is always zero
	//}
	else if (temperatures.size() == 3) {
		for (int i = 0; i < temperatures.size() - 1; ++i) {
			if (temperatures.at(i) >= temperatures.at(i + 1)) {
				result.push_back(0);
			}
			else if (i + 1 == temperatures.size() - 1){ //at the end
				result.push_back(temperatures.at(i + 1) - temperatures.at(i));
			}
		}
		//add the last one
		result.push_back(0);
	}
	return result;
}