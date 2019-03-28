/*
#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main() {

	int input,i,num;
	string st;
	deque<int> dq;
	cin >> input;

	for (i = 0; i < input; i++) {
		cin >> st;
		if (!st.compare("push_front")) {
			cin >> num;
			dq.push_front(num);
		}
		else if (!st.compare("push_back")) {
			cin >> num;
			dq.push_back(num);
		}
		else if (!st.compare("pop_front")) {
			if (dq.empty()) {
				cout << "-1\n";
			}
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (!st.compare("pop_back")) {
			if (dq.empty()) {
				cout << "-1\n";
			}
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (!st.compare("size")) {
			cout << dq.size() << "\n";
		}
		else if (!st.compare("empty")) {
			if (dq.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (!st.compare("front")) {
			if (dq.empty()) {
				cout << "-1\n";
			}
			else {
				cout << dq.front() << "\n";
			}
		}
		else if (!st.compare("back")) {
			if (dq.empty()) {
				cout << "-1\n";
			}
			else {
				cout << dq.back() << "\n";
			}
		}
	}
	return 0;
}
*/