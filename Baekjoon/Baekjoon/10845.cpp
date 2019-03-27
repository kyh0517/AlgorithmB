/*
#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {

	queue<int> data;
	string input;
	int num;
	int p;
	int i;
	cin >> num;

	for (i = 0; i < num; i++) {
		cin >> input;
		if (!input.compare("push")) {
			cin >> p;
			data.push(p);
		}
		else if (!input.compare("size")) {
			cout << data.size() << "\n";
		}
		else if (data.empty()) {
			if (!input.compare("front")) {
				cout << "-1" << "\n";
			}
			else if (!input.compare("back")) {
				cout << "-1" << "\n";
			}
			else if (!input.compare("pop")) {
				cout << "-1" << "\n";
			}
			else if(!input.compare("empty")){
				cout << "1\n";
			}
		}
		else if (!data.empty()) {

			if (!input.compare("front")) {
				cout << data.front() << "\n";
			}
			else if (!input.compare("back")) {
				cout << data.back() << "\n";
			}
			else if (!input.compare("pop")) {
				cout << data.front() << "\n";
				data.pop();
			}
			else if (!input.compare("empty")) {
				cout << 0 << "\n";
			}
		}
	}
	


	
	return 0;

}
*/