/*
#include <iostream>

using namespace std;

int main() {

	int weight;
	int kg3 = 0, kg5 = 0;

	cin >> weight;

	while (weight > 0) {

		if (weight % 5 == 0) {

			weight -= 5;
			kg5++;
		}
		else if (weight % 3 == 0) {

			weight -= 3;
			kg3++;
		}
		else if (weight > 5) {

			weight -= 5;
			kg5++;
		}
		else {
			cout << "-1";
			return 0;
		}

	}
	cout << kg3 + kg5;

	return 0;
}
*/