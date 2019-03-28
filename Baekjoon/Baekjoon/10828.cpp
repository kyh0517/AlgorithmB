/*
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int size = 0;

int main() {

	int input;
	string inst;
	int i,num;
	stack<int> data;

	
	cin >> input;

	for (i = 0; i < input; i++) {
		cin >> inst;

		if (!(inst.compare("push"))) {
			cin >> num;
			data.push(num);
		}
		else if (!(inst.compare("pop"))) {
			if (!data.empty()){
				cout << data.top() << endl;
				data.pop();
			}
			else {
				cout << "-1\n";
			}

		}
		else if (!(inst.compare("size"))) {
			cout << data.size() << endl;
		}
		else if (!(inst.compare("empty"))) {
			cout << data.empty() << endl;
		}
		else if (!(inst.compare("top"))) {
			if (!data.empty()) {
				cout << data.top() << endl;
			}
			else {
				cout << "-1\n";
			}
		}
	}

	return 0;
}
*/
