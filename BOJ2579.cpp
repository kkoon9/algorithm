#include <iostream>
using namespace std;
int memo[301][3];
int input[301];
int max(int a, int b);
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> input[i];
	memo[1][1] = input[1];
	for (int i = 2; i <= n; i++) {
		memo[i][2] = memo[i - 1][1] + input[i];
		memo[i][1] = max(memo[i - 2][1], memo[i - 2][2]) + input[i];
	}
	cout << max(memo[n][1], memo[n][2]) << '\n';
	return 0;
}

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
