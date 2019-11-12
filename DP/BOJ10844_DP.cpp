#include <iostream>
using namespace std;
const long long MOD = 1000000000;
const int MAX = 101;
const int TEN = 10;
long long d[MAX][TEN];

void DP(int N);
int main() {
	int n;
	cin >> n;
	DP(n);
	long long ans = 0;
	for (int i = 0; i < TEN; i++)
		ans += d[n][i];

	ans %= MOD;
	cout << ans << '\n';
	return 0;
}
void DP(int n) {
	for (int i = 1; i < TEN; i++) {
		d[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < TEN; j++) {
			d[i][j] = 0;
			if (j != 0)
				d[i][j] += d[i - 1][j - 1];
			if (j != 9)
				d[i][j] += d[i - 1][j + 1];

			d[i][j] %= MOD;
		}
	}
}