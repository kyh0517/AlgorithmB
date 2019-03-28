#include<iostream>
#include<queue>

using namespace std;

int main_1966() {

	int input;
	int N, M, im;
	int i,j;
	int index, p;
	int count = 1;

	cin >> input;
	
	for (i = 0; i < input; i++) {
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		count = 1;
		cin >> N >> M;
		for (j = 0; j < N; j++) {
			cin >> im;
			q.push({ j,im });
			pq.push(im);
		}

		while (!q.empty()) {

			index = q.front().first;
			p = q.front().second;
			q.pop();

			if (pq.top() == p) {
				pq.pop();
				
				if (M == index) {
					cout << count << "\n";
					break;
				}
				count++;
				
			}
			else {
				q.push({ index, p });

			}




		}
	}
	return 0;
}
