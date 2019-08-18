#include <iostream>
#include <queue>
using namespace std;

const int MAX = 1000 + 10;
const int MOVE = 4;
int mvX[MOVE] = { 0,0,1,-1 };
int mvY[MOVE] = { 1,-1,0,0 };
int arr[MAX][MAX];
bool visit[MAX][MAX];
queue <pair<int ,int>> q;

void init(int M, int N);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int M, N;
	int day = 0;
	int tomatoCnt;		 // 전체 토마토의 개수
	int yumTomato = 0;	 // 익은 토마토의 개수
	cin >> M >> N;
	tomatoCnt = M * N;
	init(M,N);
	for (int i = 1;i <= N;i++) {
		for (int j = 1;j <= M;j++) {
			cin >> arr[i][j];
			if (arr[i][j] == -1)	   // 토마토가 없으면
				tomatoCnt--;
			else if (arr[i][j] == 1) { // 토마토가 익었다면
				yumTomato++;
				q.push(make_pair(i, j));
				visit[i][j] = true;
			}
		}
	}
	//for (int i = 1;i <= N;i++) {
	//	for (int j = 1;j <= M;j++) {
	//		cout << arr[i][j] << ' ';
	//	}
	//	cout << endl;
	//}
	if (yumTomato == tomatoCnt) {
		cout << "0" << endl;
		return 0;
	} else if (yumTomato == 0) { // 익은 토마토가 없으므로 시작을 할 수 없다.
		cout << "-1" << endl;
		return 0;
	}

	while (!q.empty()) {
		int qSize = q.size();
		int oneCheck = 0;
		for (int i = 0;i < qSize;i++) {
			int oneCnt = 0;
			int idxM = q.front().first;
			int idxN = q.front().second;
			q.pop();
			visit[idxM][idxN] = true;
			for (int i = 0;i < MOVE;i++) {
				int x = idxM + mvX[i];
				int y = idxN + mvY[i];
				if (arr[x][y] == -1) {
					oneCnt++;
					continue;
				}
				else if (arr[x][y] == 1)
					oneCnt++;
				if (!visit[x][y]) {
					if (arr[x][y] == 0) {
//						cout << "arr[x][y] : " << arr[x][y] << " x : " << x << " y : " << y << endl;
						yumTomato++;
					}
					visit[x][y] = true;
					arr[x][y] = 1;
					q.push(make_pair(x, y));
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
void init(int M, int N) {
	for (int i = 0;i <= M + 1;i++) {
		arr[0][i] = -1;
		arr[N + 1][i] = -1;
	}
	for (int i = 0;i <= N + 1;i++) {
		arr[i][0] = -1;
		arr[i][M + 1] = -1;
	}
}