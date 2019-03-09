#include <iostream>
using namespace std;
long long memo[100001][3];
long long input[100001][2];
long long max(long long a, long long b);
long long max(long long a, long long b, long long c);

int main() {
	int n, t;
	cin >> t;
	for (int test_case = 1; test_case <= t; test_case++) {
		cin >> n;
		for (int i = 1; i <= n; i++) 
			cin >> input[i][0];
		for (int i = 1; i <= n; i++)
			cin >> input[i][1];
		memo[0][0] = memo[0][1] = memo[0][2] = 0;
		for (int i = 1; i <= n; i++) {
			memo[i][0] = max(memo[i-1][0], max(memo[i - 1][1], memo[i - 1][2]));
			memo[i][1] = max(memo[i - 1][2], memo[i - 1][0]) + input[i][0];
			memo[i][2] = max(memo[i - 1][1], memo[i - 1][0]) + input[i][1];
		}
		cout << max(memo[n][0], memo[n][1], memo[n][2]) << '\n';
	}
}
long long max(long long a, long long b) {
	if (a >= b)
		return a;
	else
		return b;
}
long long max(long long a, long long b, long long c) {
	if (a >= b) {
		if (a >= c)
			return a;
		else
			return c;
	}
	else {
		if (b >= c)
			return b;
		else
			return c;
	}
}