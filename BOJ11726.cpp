#include <iostream>
using namespace std;

int memo[1001];

int main() {
	memo[0] = 1;
	memo[1] = 1;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		memo[i] = memo[i - 1] + memo[i - 2];
		memo[i] %= 10007;
	}
	cout << memo[n] << endl;
	return 0;
}
