/* timeout
#include<iostream>
#include<algorithm>
#include<numeric>
int gcd(int a, int b);
int lcm(int a, int b);

using namespace std;

int main() {

	int input;
	int i, max;
	int year = 1;
	int M, N, xy, yy,x=1, y=1, x2, y2;
	cin.tie(0);
	cin >> input;

	for (i = 0; i < input; i++) {
		cin >> M >> N >> xy >> yy;
		max = lcm(M, N);
		while (!(x == M && y == N)) {

			if (x < M) {
				x = x + 1;
			}
			else {
				x = 1;
			}
			if (y < N) {
				y = y + 1;
			}
			else {
				y = 1;
			}
			if (x == xy && y == yy) {
				year++;
				break;
			}
			year++;
			if (max == year && M != xy && N != yy) {
				year = -1;
				break;
			}
		}
		cout << year;
	}

		

	return 0;
}



int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

*/