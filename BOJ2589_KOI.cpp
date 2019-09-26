#include <iostream>
#include <memory.h>
#include <queue>
using namespace std;

const int MAX = 50 + 1;
const int MOVE = 4;
int M, N;
int mvX[MOVE] = { 1,-1,0,0 };
int mvY[MOVE] = { 0,0,1,-1 };
char arr[MAX][MAX];
int max(int a, int b);
int bfs(int i, int j);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int ans = 0;
	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			if (arr[i][j] == 'L') {
				ans = max(ans, bfs(i, j));
			}
		}
	}
	cout << ans << endl;
	return 0;
}

int bfs(int i, int j) {
	int depth = -1;
	bool visit[MAX][MAX];
	queue <pair<int, int>> q;
	memset(visit, 0, sizeof(visit));
	q.push({ i, j });
	visit[i][j] = true;
	while (!q.empty()) {
		int qSize = q.size();
		for (int idx = 0;idx < qSize;idx++) {
			int idxN = q.front().first;
			int idxM = q.front().second;
			q.pop();

			for (int jdx = 0;jdx < MOVE;jdx++) {
				int x = idxN + mvX[jdx];
				int y = idxM + mvY[jdx];
				if (!(0 <= x && x < N && 0 <= y && y < M)) continue;
				if (visit[x][y])continue;
				if (arr[x][y] == 'W')continue;
				q.push(make_pair(x, y));
				visit[x][y] = true;
			}
		}
		depth++;
	}
	return depth;
}
int max(int a, int b) {
	return a > b ? a : b;
}