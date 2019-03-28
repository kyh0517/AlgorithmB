#include<iostream>
#include<algorithm>

using namespace std;

int main_1546() {

	int input;
	double maxScore;
	double aver = 0;
	int i;
	cin >> input;

	double *score;

	score = (double *)malloc(sizeof(double)*input);
	
	for (i = 0; i < input; i++) {
		cin >> score[i];
	}

	maxScore = *max_element(score, score + input);

	for (i = 0; i < input; i++) {
		aver = aver + (double)(score[i] / maxScore * 100);
	}

	cout << aver / input;

	return 0;
}