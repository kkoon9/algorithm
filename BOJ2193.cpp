#include <iostream>
using namespace std;
long long memo[91][2];
int main() {
	int n;
	cin >> n;
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
	long long result = 0;
	for (int i = 0; i < 2; i++)
		result += memo[n][i];
	cout << result << '\n';
	return 0;
}