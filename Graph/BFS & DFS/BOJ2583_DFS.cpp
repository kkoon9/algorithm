#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int areaSize = 103;
int area[areaSize][areaSize];
int cnt = 0; // 넓이
void dfs(int x, int y);
void print(int M, int N);
void edgeInit(int M, int N);
void input(int K);
void output(vector <int> v, int n);
int main() {
	int M, N, K;
	int n = 0;
	vector <int> extent;
	cin >> M >> N >> K;
	input(K);
	edgeInit(M, N);
	for (int x = 0; x <= M; x++) {
		for (int y = 0; y <= N; y++) {
			if (area[x][y] == 0) {
				n++;
				dfs(x, y);
				extent.push_back(cnt);
				cnt = 0;
			}
		}
	}
	output(extent, n);
	return 0;
}

void dfs(int x, int y) {
	area[x][y] = 1;
	cnt++;
	if (area[x - 1][y] == 0)
		dfs(x - 1, y);
	if (area[x + 1][y] == 0)
		dfs(x + 1, y);
	if (area[x][y - 1] == 0)
		dfs(x, y - 1);
	if (area[x][y + 1] == 0)
		dfs(x, y + 1);
}

void print(int M, int N) {
	for (int x = 0; x <= M + 1; x++) {
		for (int y = 0; y <= N + 1; y++)
			printf("%d ", area[x][y]);
		printf("\n");
	}
}
void input(int K) {
	while (K--) {
		int x1, y1, x2, y2;
		cin >> y1 >> x1 >> y2 >> x2;
		for (int x = x1 + 1; x <= x2; x++) 
			for (int y = y1 + 1; y <= y2; y++)
				area[x][y] = 1;	
	}
}
void edgeInit(int M, int N) {
	for (int x = 0; x <= M + 1; x++) {
		area[x][0] = 1;
		area[x][N + 1] = 1;
	}
	for (int y = 0; y <= N + 1; y++) {
		area[0][y] = 1;
		area[M + 1][y] = 1;
	}
}
void output(vector <int> v, int n) {
	cout << n << '\n';
	sort(v.begin(), v.end());
	for (int k : v)
		cout << k << ' ';
	cout << '\n';
}