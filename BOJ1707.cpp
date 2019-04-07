#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> a[20001];
int color[20001];
void dfs(int node, int c) {
	color[node] = c;
	for (int i = 0; i<a[node].size(); i++) {
		int next = a[node][i];
		if (color[next] == 0) {
			dfs(next, 3 - c);
            // 3 - c 하는 이유 : c가 1이면 다음은 2, c가 2이면 다음은 1
            // 1을 Red로 생각하고 2를 Blue로 생각하여 색 구분하기 위해
            // 3 - c를 해주는 것이다.
		}
	}
}
int main() {
	int t;
	cin >> t;
	for(int test_case = 1; test_case <= t; test_case++) {
		int n, m;
		scanf("%d %d", &n, &m);
        // 초기화 for문
    	for (int i = 1; i <= n; i++) {
			a[i].clear();
			color[i] = 0;
		} 

		// 간선을 입력해주는 for문
        for (int i = 0; i<m; i++) {
			int u, v;
			scanf("%d %d", &u, &v);
			a[u].push_back(v);
			a[v].push_back(u);
		} 
		
        for (int i = 1; i <= n; i++)
			if (color[i] == 0)
				dfs(i, 1);
		
        // 연결되어 있는 정점과 색이 같은지 검사하는 for문
		bool ok = true;
        for (int i = 1; i <= n; i++) {
			for (int k = 0; k<a[i].size(); k++) { 
				int j = a[i][k];
				if (color[i] == color[j])
					ok = false;
			}
		}
		printf("%s\n", ok ? "YES" : "NO");
	}
	return 0;
}