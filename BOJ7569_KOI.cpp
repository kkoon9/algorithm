#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100 + 10;
const int MOVE = 6;
int mvX[MOVE] = { 0,0,1,-1,0,0 };
int mvY[MOVE] = { 1,-1,0,0,0,0 };
int mvZ[MOVE] = { 0,0,0,0,1,-1 };
int arr[MAX][MAX][MAX];
bool visit[MAX][MAX][MAX];
queue <pair<pair<int, int>, int>> q;

void init(int M, int N, int H);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int M, N, H;
	int day = 0;
	int tomatoCnt;		 // 전체 토마토의 개수
	int yumTomato = 0;	 // 익은 토마토의 개수
	cin >> M >> N >> H;
	tomatoCnt = M * N * H;
	init(M, N, H);
	for (int k = 1;k <= H;k++) {
		for (int i = 1;i <= N;i++) {
			for (int j = 1;j <= M;j++) {
				cin >> arr[k][i][j];
				if (arr[k][i][j] == -1)	   // 토마토가 없으면
					tomatoCnt--;
				else if (arr[k][i][j] == 1) { // 토마토가 익었다면
					yumTomato++;
					q.push(make_pair(make_pair(k, i),j));
					visit[k][i][j] = true;
				}
			}
		}
	}
	//for (int k = 0;k <= H + 1;k++) {
	//	for (int i = 0;i <= N+1;i++) {
	//		for (int j = 0;j <= M+1;j++) {
	//			cout << arr[k][i][j] << ' ';
	//		}
	//		cout << endl;
	//	}
	//}
	if (yumTomato == tomatoCnt) {
		cout << "0" << endl;
		return 0;
	}
	else if (yumTomato == 0) { // 익은 토마토가 없으므로 시작을 할 수 없다.
		cout << "-1" << endl;
		return 0;
	}

	while (!q.empty()) {
		int qSize = q.size();
		int oneCheck = 0;
		for (int i = 0;i < qSize;i++) {
			int oneCnt = 0;
			int idxH = q.front().first.first;
			int idxM = q.front().first.second;
			int idxN = q.front().second;
			q.pop();
			visit[idxH][idxM][idxN] = true;
			for (int i = 0;i < MOVE;i++) {
				int x = idxM + mvX[i];
				int y = idxN + mvY[i];
				int z = idxH + mvZ[i];
				if (arr[z][x][y] == -1) {
					oneCnt++;
					continue;
				}
				else if (arr[z][x][y] == 1)
					oneCnt++;
				if (!visit[z][x][y]) {
					if (arr[z][x][y] == 0) {
						//						cout << "arr[x][y] : " << arr[x][y] << " x : " << x << " y : " << y << endl;
						yumTomato++;
					}
					visit[z][x][y] = true;
					arr[z][x][y] = 1;
					q.push(make_pair(make_pair(z, x),y));
				}
			}
			if (oneCnt == MOVE)
				oneCheck++;

		}
		if (oneCheck != qSize)
			day++;
	}
	if (yumTomato != tomatoCnt) {
		cout << "-1" << endl;
	}
	else
		cout << day << endl;
	return 0;
}
void init(int M, int N, int H) {
	for (int k = 0;k <= H + 1;k++)
		for (int i = 0;i <= N + 1;i++)
			for (int j = 0;j <= M + 1;j++)
				arr[k][i][j] = -1;
}