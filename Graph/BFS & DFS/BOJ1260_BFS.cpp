#pragma warning(disable: 4996) 
#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

const int MAX = 1001;
vector<int> a[MAX];

bool check[MAX];
void dfs(int node);
void bfs(int start);
void init(bool check[], int n);

int main() {
	int n, m, start;
	cin >> n >> m >> start;

	/* input part*/
	for (int i = 0; i < m; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}

	/* sort part*/
	for (int i = 1; i <= n; i++) 
		sort(a[i].begin(), a[i].end());
	
	dfs(start);
	printf("\n");
	init(check, n);
	bfs(start);
	printf("\n");

	return 0;
}
void init(bool check[], int n) {
	for (int i = 0; i <= n; i++)
		check[i] = false;
}
void dfs(int node) {
	check[node] = true;
	printf("%d ", node);
	for (int i = 0; i < a[node].size(); i++) {
		int next = a[node][i];
		if (check[next] == false) {
			dfs(next);
		}
	}
}

void bfs(int start) {
	queue<int> q;
	check[start] = true;
	q.push(start);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		printf("%d ", node);
		for (int i = 0; i < a[node].size(); i++) {
			int next = a[node][i];
			if (check[next] == false) {
				check[next] = true;
				q.push(next);
			}
		}
	}
}