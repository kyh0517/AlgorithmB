#include<iostream>
#include<string>
#include<stack>
using namespace	std;

int main_2504() {

	string input;
	stack<char> ch;

	int size;
	int i;
	int count=1;
	int result = 0;
	cin >> input;

	size = input.size();

	for (i = 0; i < size; i++) {
		if (input.at(i) == '(') {
			ch.push('(');
			count++;

		}
		else if (input.at(i) == '[') {
			ch.push('[');
			count++;

		}
		else if (input.at(i) == ')') {
			if (ch.empty()) {
				cout << "0\n";
				return 0;

			}else {
				if (ch.top() != '(') {
					cout << "0\n";
					return 0;
				}
				count--;
				ch.pop();
			}

		}
		else {
			if (ch.empty()) {
				cout << "0\n";
				return 0;

			}
			else {
				if (ch.top() != '[') {
					cout << "0\n";
					return 0;
				}
				count--;
				ch.pop();
			}


			
		}
	}

	if (!ch.empty()) {
		cout << "0\n";
		return 0;
	}
	else {
		count = 1;
		for (i = 0; i < size; i++) {
			
			if (input.at(i) == '(') {
				ch.push('(');
				count *= 2;

			}
			else if (input.at(i) == '[') {
				ch.push('[');
				count *= 3;
			}
			else if (input.at(i) == ')') {
				if (input.at(i-1) == '(') {
					result += count;
				}
				ch.pop();
				count /= 2;
			}
			else {
				if (input.at(i - 1) == '[') {
					result += count;
				}
				ch.pop();
				count /= 3;
			}

		}
		cout << result << "\n";
	}



	return 0;
}