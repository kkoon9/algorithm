#include <iostream>
using namespace std;
const int N_MAX = 100 + 1;
bool check[N_MAX][N_MAX];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	int p, q;
	int sum = -1;
	cin >> N >> M;
	for (int i = 0;i < M;i++) {
		cin >> p >> q;
		check[p][q] = true;
		check[q][p] = true;
	}
	for (int k = 1; k <= N; k++)
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				if (check[i][k] && check[k][j]) check[i][j] = 1;

	for (int i = 1;i <= N;i++) {
		if (check[1][i])sum += 1;
	}
	cout << sum << endl;
}