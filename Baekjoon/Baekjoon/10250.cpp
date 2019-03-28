#include<iostream>

using namespace std;

int main_10250() {

	int input;
	int Y, X, N;
	int room;
	int i;
	cin >> input;

	for (i = 0; i < input; i++) {

		cin >> Y >> X >> N;
		
		if (N % Y == 0) {
			room = ((N / Y)) + (Y * 100);
		}
		else {
			room = ((N / Y) + 1) + (N % Y) * 100;
		}
		
		cout << room << endl;
		
	}
}