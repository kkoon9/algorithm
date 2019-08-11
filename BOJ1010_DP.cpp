#include <iostream>
using namespace std;
const int MAX = 30;
long long memo[MAX][MAX];

void Clear(long long memo[][MAX]);
void DP(long long memo[][MAX], int M, int N);
int main() {
	int T, M, N;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		Clear(memo);
		cin >> M >> N;
		DP(memo, M, N);
		cout << memo[M][N] << endl;
	}
	return 0;
}

void Clear(long long memo[][MAX]) {
	for (int i = 1;i < MAX;i++)
		for (int j = 1; j < MAX;j++)
			memo[i][j] = 0;
	for (int i = 1;i < MAX;i++)
		memo[1][i] = i;

}

void DP(long long memo[][MAX], int M, int N) {
	for (int i = 2;i <= M;i++)
		for (int j = i; j <= N;j++) {
			if (i == j) {
				memo[i][j] = 1;
				continue;
			}
			memo[i][j] = memo[i][j - 1] + memo[i - 1][j - 1];
		}
}