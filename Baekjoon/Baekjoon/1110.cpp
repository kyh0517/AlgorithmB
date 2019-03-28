/*
#include <iostream>

using namespace std;

int main() {

	int input;
	int num1, num2;
	int result;
	int count = 0;
	cin >> input;

	num1 = input / 10;
	num2 = input % 10;
	result = num1 + num2;

	while (1) {
		count++;
		num1 = num2;
		num2 = result % 10;

		result = num1 + num2;
		if (num1 == input / 10 && num2 == input % 10) {
			cout << count;
			break;
		}
	}

	return 0;
}
*/