#include <iostream>
using namespace std;
const long long MOD = 10007;
const int TEN = 10;
const int MAX = 1000 + 1;
long long d[MAX][TEN];

void DP(int n);
int main() {
	int n;
	cin >> n;
	DP(n);
	long long ans = 0;
	for (int i = 0; i < TEN; i++) {
		ans += d[n][i];
	}
	ans %= MOD;
	cout << ans << '\n';
	return 0;
}
void DP(int n) {
	for (int i = 0; i < TEN; i++) {
		d[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < TEN; j++) {
			for (int k = 0; k <= j; k++) {
				d[i][j] += d[i - 1][k];
				d[i][j] %= MOD;
			}
		}
	}
}