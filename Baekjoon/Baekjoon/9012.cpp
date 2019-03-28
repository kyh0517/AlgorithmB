#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main_9012() {

	int input, count = 0;
	int i = 0, j = 0, size;
	string st;
	stack<char> ch;

	cin >> input;

	while (i < input) {
		cin >> st;
		size = st.size();
		for (j = 0; j < size; j++) {
			if (st.at(j) == '(') {
				ch.push('(');
				count++;
			}
			else {
				count--;
				if (!ch.empty()) {
					ch.pop();
					
				}
				else {
					cout << "NO\n";
					break;
				}
			}
		}

		if (!ch.empty()) {
			cout << "NO\n";
			while (!ch.empty()) {
				ch.pop();
			}
		}
		else if (ch.empty() && count == 0) {
			cout << "YES\n";
		}
		i++;
		count = 0;

	}
	
}