#include <iostream>
using namespace std;
long long memo[201][201];
long long mod = 1000000000;
int main() {
	int n,k;
	cin >> n >> k;
	for (int i = 1; i <= k; i++)
		memo[1][i] = i;
	for (int i = 2; i <= n; i++) {
		memo[i][1] = 1;
		for (int j = 2; j <= k; j++) {
			memo[i][j] = memo[i][j - 1] + memo[i - 1][j];
			memo[i][j] %= mod;
		}
	}
	cout << memo[n][k] << '\n';
	return 0;
}
