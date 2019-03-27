/*
#include<iostream>
#include<queue>

using namespace std;

void DFS(int N, int V);
void BFS(queue<int> q, int N, int V);

int **GRAPH;
int *visit;

int main() {

	int N,M,S;
	int f, t;
	int i;

	queue<int> q;
	cin >> N >> M >> S;

	GRAPH = (int**)malloc(sizeof(int*)*(N+1));

	for (i = 0; i <= N; i++) {
		GRAPH[i] = (int*)malloc(sizeof(int)*(N+1));
	}
	visit = (int*)malloc(sizeof(int)*(N + 1));

	
	for (i = 0; i < M; i++) {
		cin >> f >> t;
		GRAPH[f][t] = 1;
		GRAPH[t][f] = 1;
	}
	
	visit[S] = 1;
	DFS(N, S);
	
	cout << "\n";
	visit = (int*)malloc(sizeof(int)*(N + 1));
	BFS(q, N, S);
	cout << "\n";
	
	return 0;
}

void DFS(int N, int V) {
	int i;
	cout << V << " ";

	for (i = 1; i <= N; i++){
		if (GRAPH[V][i] == 1 && visit[i] != 1) {
			visit[i] = 1;
			DFS(N, i);
		}
	}
}

void BFS(queue<int> q,int N, int V) {
	q.push(V);
	visit[V] = 1;
	int i;

	while (!q.empty()) {
		V = q.front();
		q.pop();

		cout << V << " ";
		for (i = 1; i <= N; i++) {
			if (GRAPH[V][i] == 1 && visit[i] != 1) {
				q.push(i);
				visit[i] = 1;
			}
		}

	}
}
*/