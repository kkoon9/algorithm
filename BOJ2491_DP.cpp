#include <iostream>
using namespace std;
const int SIZE = 1000000 + 10;
int arr[SIZE];
int dp[SIZE];

int max(int a, int b);
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, ans = 1;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] >= arr[i - 1])
			dp[i] = dp[i - 1] + 1;
		else dp[i] = 1;
		ans = max(ans, dp[i]);
	}
	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] <= arr[i - 1]) dp[i] = dp[i - 1] + 1;
		else dp[i] = 1;
		ans = max(ans, dp[i]);
	}
	cout << ans << endl;
	return 0;
}
int max(int a, int b) {
	return a >= b ? a : b;
}