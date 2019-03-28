#include<iostream>

using namespace std;

void q_sort(int *sort, int s, int e);
void swap(int *x, int *y);
int main_2750() {

	int input;
	int *sort;
	int i;

	cin >> input;

	sort = (int*)malloc(sizeof(int)*input);

	for (i = 0; i < input; i++) {
		cin >> sort[i];
	}

	q_sort(sort, 0, input-1);

	for (i = 0; i < input; i++) {
		cout << sort[i] << endl;
	}
	


	return 0;
}

void q_sort(int *sort, int s, int e) {

	int pivot = s;
	int i = pivot + 1;
	int j = e;

	if (s >= e) {
		return;
	}

	while (i <= j) {

		while (i <= e && sort[pivot] >= sort[i]) {
			i++;

		}
		while (j > s && sort[pivot] <= sort[j]) {
			j--;
		}

		if (i > j) {
			swap(&sort[j], &sort[pivot]);
		}
		else {
			swap(&sort[i], &sort[j]);
		}
	}

	q_sort(sort, s, j - 1);
	q_sort(sort, j + 1, e);


}

void swap(int *x, int *y) {
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;


}