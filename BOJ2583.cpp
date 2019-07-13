#include <iostream>
#include <vector>
using namespace std;
int area[103][103];
void dfs(int x, int y);
int main() {
		int M, N, K;
		int n = 0;
		cin >> M >> N >> K;
		while (K--) {
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			for (int x = x1; x <= x2; x++) {
				for (int y = y1; y <= y2; y++)
					area[x][y] = 1;
			}
		}
		for (int x = 0; x <= M + 1; x++) {
			area[x][0] = 1;
			area[x][N + 1] = 1;
		}
		for (int y = 0; y <= N + 1; y++) {
			area[0][y] = 1;
			area[M+1][y] = 1;
		}
		for (int x = 0; x <= M; x++) {
			for (int y = 0; y <= N; y++) {
				if (area[x][y] == 0) {
					n++;
					dfs(x, y);
				}
			}
		}
		cout << n << '\n';
		for (int i = 0; i < 51; i++)
			for (int j = 0; j < 51; j++)
				area[i][j] = 0;


		n = 0;
	
	return 0;
}
void dfs(int x, int y) {
	area[x][y] = 1;
	if (area[x - 1][y] == 1)
		dfs(x - 1, y);
	if (area[x + 1][y] == 1)
		dfs(x + 1, y);
	if (area[x][y - 1] == 1)
		dfs(x, y - 1);
	if (area[x][y + 1] == 1)
		dfs(x, y + 1);
}
