/*
#include<iostream>

using namespace std;

int main() {

	int input;

	cin >> input;

	long long *n = new long long[input + 1];
	int i;


	n[0] = 0;
	n[1] = 1;

	for (i = 2; i <= input; i++) {
		n[i] = n[i - 1] + n[i - 2];
	}

	cout << n[input];


	return 0;
}
*/