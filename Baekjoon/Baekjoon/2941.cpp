#include<iostream>
#include<string>
using namespace std;

int main_2941() {

	string input;
	int size, i, count = 0;
	
	cin >> input;
	size = input.size();
	for (i = 0; i < size;) {
		if (i < size) {
			if (input.at(i) == 'c' && i+1 < size) {
				if (input.at(i+1) == '=') {
					i += 2;
					count++;
				}
				else if (input.at(i+1) == '-') {
					i += 2;
					count++;
				}
				else {
					i++;
					count++;
				}
			}
			else if (input.at(i) == 'd' && i + 1 < size) {
				
				if (input.at(i + 1) == 'z') {
					if (i + 2 < size && input.at(i + 2) == '=') {
						i += 3;
						count++;
					}
					else {

						i+=2;
						count+=2;
					}
				}
				else if (input.at(i + 1) == '-') {
					i += 2;
					count++;
				}
				else {
					i++;
					count++;
				}
			}
			else if (input.at(i) == 'l' && i + 1 < size) {
				if (input.at(i + 1) == 'j') {
					i += 2;
					count++;
				}
				else {
					i++;
					count++;
				}
			}
			else if (input.at(i) == 'n' && i + 1 < size) {
				if (input.at(i + 1) == 'j') {
					i += 2;
					count++;
				}
				else {
					i++;
					count++;
				}
			}
			else if (input.at(i) == 's' && i + 1 < size) {
				if (input.at(i + 1) == '=') {
					i += 2;
					count++;
				}
				else {
					i++;
					count++;
				}
			}
			else if (input.at(i) == 'z' && i + 1 < size) {
				if (input.at(i + 1) == '=') {
					i += 2;
					count++;
				}
				else {
					i++;
					count++;
				}
			}
			else {
				i++;
				count++;
			}
		}
		
	}

	cout << count;

	return 0;
}