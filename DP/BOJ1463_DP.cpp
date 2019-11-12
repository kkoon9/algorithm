#include <iostream>
using namespace std;

const int MAX = 1000001;

int MakeOne(int memo[], int n);
int dp(int memo[], int n);

int main() {
	int memo[MAX];
	int n;
	cin >> n;
	cout << dp(memo,n) << '\n';
	//cout << MakeOne(memo,n) << '\n';
	return 0;
}
int dp(int memo[], int n) { // Bottom-up 방식
	memo[1] = 0;
	for (int i = 2; i <= n; i++) {
		memo[i] = memo[i - 1] + 1; // 기본 memo[i]에 들어갈 수
		if (i % 2 == 0 && memo[i] > memo[i / 2] + 1) {
			memo[i] = memo[i / 2] + 1;
		}
		if (i % 3 == 0 && memo[i] > memo[i / 3] + 1) {
			memo[i] = memo[i / 3] + 1;
		}
	}
	return memo[n];
}

int MakeOne(int memo[], int n) { // Top-Down 방식
	if (n == 1)
		return 0;
	if (memo[n] > 0)
		return memo[n];
	memo[n] = MakeOne(n - 1) + 1;
	if (n % 2 == 0) {
		int temp = MakeOne(n / 2) + 1;
		if (memo[n] > temp)
			memo[n] = temp;
	}
	if (n % 3 == 0) {
		int temp = MakeOne(n / 3) + 1;
		if (memo[n] > temp)
			memo[n] = temp;
	}
	return memo[n];
}
