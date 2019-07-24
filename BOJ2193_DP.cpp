#include <iostream>
using namespace std;

const int MAX = 91;
long long memo[MAX][2];

void DP(long long memo[][2], int n);
int main() {
	int n;
	long long result = 0;
	cin >> n;
	DP(memo, n);
	for (int i = 0; i < 2; i++)
		result += memo[n][i];
	cout << result << '\n';
	return 0;
}

void DP(long long memo[][2], int n) {
	memo[1][0] = 0;
	memo[1][1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 2; j++) {
			memo[i][j] = 0;
			if (j == 0) // 0의 개수 : 전 단계의 0과 1의 개수
				memo[i][j] += memo[i - 1][j] + memo[i - 1][j + 1];
			else // 1의 개수 : 전 단계의 0의 개수
				memo[i][j] += memo[i - 1][j - 1];
		}
	}
}
