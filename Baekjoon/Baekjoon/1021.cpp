/*
#include<iostream>
#include<deque>
#include<queue>
using namespace std;

int main() {

	int N, M, i, num, size, index, count=0;
	queue<int> q;
	deque<int> dq;
	cin >> N >> M;

	for (i = 0; i < M; i++) {
		cin >> num;
		q.push(num);
	}

	for (i = 1; i <= N; i++) {
		dq.push_back(i);
	}
	
	while (!q.empty()) {
		size = dq.size();
		index = 0;
		if (q.front() == dq.front()) {
			q.pop();
			dq.pop_front();
		}
		else {
			
			for (i = 0; i < size; i++) {
				if (dq[i] == q.front()) {
					index = i;
					break;
				}
			}

			if (index <= size / 2) {
				for (i = 0; i < index; i++) {
					num = dq.front();
					dq.pop_front();
					dq.push_back(num);
					count++;
				}
			}
			else {
				for (i = 0; i < size - index; i++) {
					num = dq.back();
					dq.pop_back();
					dq.push_front(num);
					count++;
				}
			}

		}

	}
	cout << count;
	
	return 0;
}
*/