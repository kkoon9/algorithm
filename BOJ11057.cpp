#include <iostream>
using namespace std;
int memo[1001][10];
int mod = 10007;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i <= 9; i++)
		memo[1][i] = 1;
	for (int i = 2; i <= n; i++) {
		int sum = 0;
		for (int j = 0; j <= 9; j++) {
			memo[i][j] = 0;
			sum += memo[i - 1][j];
			memo[i][j] += sum;
			memo[i][j] %= mod;
		}
	}
	int result = 0;
	for (int i = 0; i <= 9; i++)
		result += memo[n][i];
	result %= mod;
	cout << result << '\n';
	return 0;
}