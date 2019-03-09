#include <iostream>
using namespace std;
long long memo[10001];
long long input[10001];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> input[i];
	memo[1] = input[1];
	memo[2] = input[1] + input[2];
	for (int i = 3; i <= n; i++) {
		memo[i] = memo[i - 1];
		if (memo[i] <= memo[i - 2] + input[i])
			memo[i] = memo[i - 2] + input[i];
		if (memo[i] < memo[i - 3] + input[i - 1] + input[i])
			memo[i] = memo[i - 3] + input[i - 1] + input[i];
	}
	cout << memo[n] << '\n';
	return 0;
}
