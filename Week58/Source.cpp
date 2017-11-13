#include "Header.h"

string Solution::countOfAtoms(string formula) {
	string output;
	if (formula.length() == 2) {
		if (formula.at(0) > formula.at(1)) {
			output = string(1,formula.at(1)) + string(1,formula.at(0));
			return output;
		}
		if ((formula.at(0) >= 48) && (formula.at(0) <= 57)) {
			output = "";
			return output;
		}
	}
	vector<string> elements;
	if (formula.length() == 3) {
		if (isupper(formula.at(0))) {
			elements.push_back(string(1,formula.at(0)));
		}
		if (isupper(formula.at(1)) && islower(formula.at(2))) {
			string element = string(1, formula.at(1)) + string(1, formula.at(2));
			elements.push_back(element);
		}
		sort(elements.begin(), elements.end());

		stringstream ss;
		for (vector<string>::iterator it = elements.begin(); it != elements.end(); ++it) {
			ss << *it;
		}
		return ss.str();
		
	}
	return formula;
}