// 크루스칼 알고리즘
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct edge {
	int src, dest, weight;
	bool operator <(const edge& rhs) const { // 가중치 비교하기 위한
		return weight < rhs.weight;
	}
};// 간선 정보
const int MAX = 10000 + 1;
vector<edge> vt;

int parent[MAX];
int v, e, k;

int find(int);
bool merge(int, int);

int main() {
	scanf("%d %d", &v, &e);

	for (int i = 1; i <= v; i++) {
		parent[i] = i;
	}// 자기 자신을 부모로 초기화

	edge tmp;
	for (int i = 0; i < e; i++) {
		scanf("%d %d %d", &tmp.src, &tmp.dest, &tmp.weight);
		vt.push_back(tmp);
	}

	sort(vt.begin(), vt.end());// 가중치 오름차순 정렬

	for (int i = 0; i < e; i++) {
		if (merge(vt[i].src, vt[i].dest)) {
			k += vt[i].weight;// 최적의 가중치를 더한다
		}// 사이클 없이 합칠 수 있으면 합친다
	}

	printf("%d\n", k);
	return 0;
}

int find(int u) {
	if (u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

bool merge(int u, int v) {
	u = find(u);
	v = find(v);
	if (u == v) return false;// 사이클 방지
	parent[v] = u;
	return true;
}
// 프림 알고리즘
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX = 10000 + 1;
vector<vector<pair<int, int>>> edge;
priority_queue < pair<int, int>, vector<pair<int, int>>, greater< >> pq;

bool visited[MAX];
int v, e, c, k;

void prim(int v);

int main() {
	scanf("%d %d", &v, &e);
	edge.resize(v + 1);
	int x, y, z;
	for (int i = 0; i < e; i++) {
		scanf("%d %d %d", &x, &y, &z);
		edge[x].push_back({ z, y });
		edge[y].push_back({ z, x });
	}
	prim(1);// 1번 정점으로 트리를 만들어 시작
	printf("%d\n", k);
	return 0;
}

void prim(int v) {
	visited[v] = true;

	for (auto u : edge[v]) {
		if (!visited[u.second]) {
			pq.push({ u.first, u.second });
		}
	} // 정점 v와 연결된 간선을 큐에 담는다

	while (!pq.empty()) {
		auto w = pq.top();
		pq.pop();
		if (!visited[w.second]) {
			k += w.first;
			prim(w.second);
			return;
		} // 정점이 트리와 연결되지 않았으면 연결한다
	} // 가중치가 낮은 간선을 차례대로 탐색하면서
}