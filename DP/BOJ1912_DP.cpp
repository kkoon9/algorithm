#include <iostream>
using namespace std;
const int MAX = 100001;

void DP(int memo[], int input[], int n);
int result(int memo[], int n);
int max(int a, int b);
int main() {
	int n;
	cin >> n;
	int memo[MAX];
	int input[MAX];
	for (int i = 1; i <= n; i++)
		cin >> input[i];
	DP(memo, input, n);
	int ans = result(memo, n);
	cout << ans << '\n';
	return 0;
}

int result(int memo[], int n) {
	int maxValue = memo[1];
	for (int i = 2; i <= n; i++) {
		if (maxValue < memo[i])
			maxValue = memo[i];
	}
	return maxValue;
}

int max(int a, int b) {
	return a > b ? a : b;
}

void DP(int memo[], int input[], int n) {
	memo[0] = 0;
	for (int i = 1; i <= n; i++) 
		memo[i] = max(memo[i - 1] + input[i], input[i]);
}
