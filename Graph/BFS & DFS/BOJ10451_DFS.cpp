#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <iostream>
#include <vector>
using namespace std;
vector<int> a[1001];
bool c[1001];
void dfs(int node) {
	if (c[node])return;
	c[node] = true;
	for (int i = 0; i<a[node].size(); i++) {
		int next = a[node][i];
		if (c[next] == false)
			dfs(next);
	}
}
int main() {
	int t;
	cin >> t;
	for(int test_case = 1; test_case <= t; test_case++) {
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			a[i].clear();
			c[i] = 0;
		} // 초기화 for문
		for (int i = 1; i<=n; i++) {
			int v;
			scanf("%d", &v);
			a[i].push_back(v);
			a[v].push_back(i);
		} // 간선을 입력해준다.
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			if (c[i] == false) {
				dfs(i);
				ans += 1;
			}
		}
		printf("%d\n", ans);

	}
	return 0;
}