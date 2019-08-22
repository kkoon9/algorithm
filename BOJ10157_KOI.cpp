#include <iostream>
using namespace std;

const int SIZE = 1000 + 1;
bool check[SIZE][SIZE];
int res[2];
const int dx[4] = { 0,1,0,-1 };
const int dy[4] = { 1,0,-1,0 };
void Init(int C, int R);
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int C, R, K;
	int x = 1, y = 0, cnt = 0;
	cin >> C >> R;
	cin >> K;
	if (C * R < K) {
		cout << "0\n";
		return 0;
	}
	else if (K == 1) {
		cout << "1 1\n";
		return 0;
	}
	Init(C, R);
	check[x][y] = false;
	for (int i = 0;i < 4;i++) {
		while (!check[x][y]) {
			if (cnt == K) {
				res[0] = x;
				res[1] = y;
				cout << res[0] << ' ' << res[1] << endl;
				return 0;
			}
			check[x][y] = true;
			x += dx[i];
			y += dy[i];
			cnt++;
			//cout << cnt << " : x : " << x << " y : " << y << endl;
		}
		//cout <<cnt << " : End x : " << x << " y : " << y << endl;
		x -= dx[i];
		y -= dy[i];
		cnt--;
		check[x][y] = false;
		if (i == 3)i = -1;
		continue;
	}
	return 0;
}

void Init(int C, int R) {
	for (int i = 0;i <= R;i++) {
		check[0][i] = true;
		check[C+1][i] = true;
	}
	for (int i = 0;i <= C;i++) {
		check[i][0] = true;
		check[i][R+1] = true;
	}
}