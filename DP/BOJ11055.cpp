#include <iostream>
using namespace std;
int memo[1001];
int input[1001];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> input[i];
	for (int i = 1; i<=n; i++) {
		memo[i] = input[i];
		for (int j = 1; j <= i; j++) 
			if (input[j] < input[i] && memo[j] + input[i] > memo[i])
				memo[i] = memo[j] + input[i];
	}
	int ans = memo[1];
	for (int i = 2; i <= n; i++) 
		if (ans < memo[i])
			ans = memo[i];
	cout << ans << '\n';
	return 0;
}
