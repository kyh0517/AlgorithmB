#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;


int main() {
	
	int input;
	int *num;
	int pop;
	int i,count = 1;
	stack<int> data;
	queue<string> pm;
	cin >> input;
	pop = input;
	num = (int*)malloc(sizeof(int)*input);

	for (i = 0; i < input; i++) {
		cin >> num[i];
	}
	i = 0;


	while (count <= input || pop != 0) {
		if (!(data.empty()) && num[i] == data.top()) {
			i++;
			pop--;
			data.pop();
			pm.push("-");
		}
		else if(count <= input) {
			data.push(count++);
			pm.push("+");
		}
		else {
			cout << "NO\n";
			return 0;
		}

	}
	while (1) {
		if (data.empty()) {
			if (!(pm.empty())) {
				cout << pm.front() << "\n";
				pm.pop();
				if (pm.empty()) {
					break;
				}
			}
		}
	}
	


	return 0;
}
