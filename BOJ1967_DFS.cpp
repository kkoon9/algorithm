#pragma warning(disable: 4996)
#include <iostream>
#include <vector>
using namespace std;

const int MAX = 10001;
int RtoNode = 0; // root에서 가장 먼 정점
long long diameter = 0; // 지름

vector <pair<int, int>> dis[MAX];
bool check[MAX];

void dfs(int node, int dt);

int main() {
	int n; // 정점의 개수
	int v_num, a, b;
	cin >> n;
	for (int i = 1; i < n; i++) {
		scanf("%d %d %d", &v_num, &a, &b);
		dis[v_num].push_back(make_pair(a, b));
		dis[a].push_back(make_pair(v_num, b));
	}
	dfs(1, 0);
	for (int i = 1; i <= n; i++)
		check[i] = false;
	diameter = 0;
	dfs(RtoNode, 0);
	cout << diameter << '\n';
	return 0;
}

void dfs(int node, int dt) { // node : 정점, dt : distance, 거리
	if (check[node]) return;
	check[node] = true;
	if (diameter < dt) {
		diameter = dt;
		RtoNode = node;
	}
	for (int i = 0; i < dis[node].size(); i++)
		dfs(dis[node][i].first, dt + dis[node][i].second);
}