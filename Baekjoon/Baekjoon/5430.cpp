/*
#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main() {

	int input, arrSize, stSize, instSize, i, j, temp;
	bool R, D;
	string inst;
	string arr;
	cin >> input;

	for (i = 0; i < input; i++) {

		cin >> inst;
		cin >> arrSize;
		cin >> arr;

		instSize = inst.size();
		stSize = arr.size();
		string num;
		deque<int> dq;
		D = false;
		R = false;
		for (j = 0; j < stSize; j++) {

			if (arr[j] == '[') {
				continue;
			}
			else if (arr[j] >= '0' && arr[j] <= '9') {
				num += arr[j];
			}
			else {
				if (!num.empty()) {
					dq.push_back(stoi(num));
					num.clear();
				}
			}
		}

		for (j = 0; j < instSize; j++) {
			if (inst[j] == 'R') {
				R = !R;
			}
			else {
				if (dq.empty()) {
					D = true; //D는 플래그 비어있으면 1 안비어있으면 0
					break;
				}
				else if(R) {
					dq.pop_back();
				}
				else if (!R) {
					dq.pop_front();
				}
			}
		}
		arrSize = dq.size();
		if (D) {
			cout << "error\n";
		}
		else if (R) {
			cout << "[";
			for (j = 0; j < arrSize; j++) {
				cout << dq.back();
				dq.pop_back();
				if (!dq.empty()) {
					cout << ",";
				}
			}
			cout << "]\n";
		}
		else if (!R) {
			cout << "[";
			for (j = 0; j < arrSize; j++) {
				cout << dq.front();
				dq.pop_front();
				if (!dq.empty()) {
					cout << ",";
				}
			}
			cout << "]\n";
		}

	}

	return 0;
}
*/