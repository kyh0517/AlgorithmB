/*
#include<iostream>

using namespace std;



int main() {

	int input,num,i;

	cin >> num;

	for (i = 0; i < num; i++) {
		cin >> input;

		int *n = new int[input + 1];
		int *m = new int[input + 1];
		int i;


		n[0] = 0;
		n[1] = 1;

		m[0] = 1;
		m[1] = 0;



		for (i = 2; i <= input; i++) {
			n[i] = n[i - 1] + n[i - 2];
			m[i] = m[i - 1] + m[i - 2];
		}

		cout << m[input] << " " << n[input] <<"\n";

	}



	return 0;

}
*/