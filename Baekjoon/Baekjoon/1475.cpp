/*
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {

	string input; 
	int length;
	int count = 0;
	int set[9] = { 0 };
	int max;
	int i;
	cin >> input;

	length = input.length();

	for (i = 0; i < length; i++) {

		if (input.at(i) == '6' || input.at(i) == '9') {
			count++;
			if (count == 2) {
				count = 0;
				set[6]++;
			}
		}
		else {
			set[input.at(i)-'0']++;
		}

	}
	if (count == 1) {
		set[6]++;
	}
	cout << *max_element(set,set+8) << "\n";

	return 0;
}
*/