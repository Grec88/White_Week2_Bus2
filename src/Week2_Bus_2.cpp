//============================================================================
// Name        : Week2_Bus_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

bool Compare(const vector<string> &vector1, const vector<string> &vector2) {
	size_t k = 0;
	if (vector1.size() == vector2.size()) {
		for (size_t i = 0; i < vector1.size(); ++i) {
			if (vector1[i] == vector2[i]) {
				k++;
			}
		}
		if (k == vector1.size()) {
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}

int main() {
	map<int, vector<string>> base;
	int n, quant;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> quant;
		vector<string> stat(quant);
		for (auto &c : stat) {
			cin >> c;
		}
		if (base.size() != 0) {
			size_t count = 0;
			for (auto& [key, value] : base) {
				if (Compare(value, stat) == 1) {
					cout << "Already exists for " << key << endl;
				} else {
					count++;
				}
			}
			if (count == base.size()) {
				base[base.size() + 1] = stat;
				cout << "New bus " << base.size() << endl;

			}
		} else {
			base[base.size() + 1] = stat;
			cout << "New bus " << base.size()<< endl;
		}
	}
	return 0;
}
