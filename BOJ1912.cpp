#include <iostream>
using namespace std;
int memo[100001];
int input[100001];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> input[i];
	for (int i = 1; i <= n; i++) {
		memo[i] = memo[i-1];
		if (memo[i] < 0)
			memo[i] = input[i];
		else
			memo[i] += input[i];
	}
	int ans = memo[1];
	for (int i = 2; i <= n; i++) {
		if (ans < memo[i])
			ans = memo[i];
	}
	cout << ans << '\n';
	return 0;
}