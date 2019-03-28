/*
#include<iostream>
#include<queue>
using namespace std;

int main() {

	int N, M;
	int people;
	int i;
	queue<int> q;
	
	cin >> N >> M;

	for (i = 1; i <= N; i++) {
		q.push(i);
	}
	cout << "<";
	while (!q.empty()) {
		for (i = 1; i < M; i++) {
			people = q.front();
			q.pop();
			q.push(people);
		}
		cout << q.front();
		q.pop();
		if (!q.empty()) {
			cout << ", ";
		}
	}
	cout << ">";
	return 0;
}
*/