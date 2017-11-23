#include "Header.h"

string Solution::countOfAtoms(string formula) {
	vector<string> elements;
	string output;
	if (formula.length() == 1) return formula;
	int index = 0; 
	while(index < formula.length()) {
		if (index == formula.length() - 1) {
			elements.push_back(string(1, formula.at(index)));
			++index;
		}
		else if (isupper(formula.at(index)) && isupper(formula.at(index + 1))) {
			elements.push_back(string(1, formula.at(index)));
			++index;
		}
		else if (isupper(formula.at(index)) && islower(formula.at(index + 1))) {//Mg
			string element = formula.substr(index, 2);
			elements.push_back(element);
			index += 2;
		}
	}
	sort(elements.begin(), elements.end());

	stringstream ss;
	for (vector<string>::iterator it = elements.begin(); it != elements.end(); ++it) {
		ss << *it;
	}
	return ss.str();
}