#include <iostream>
using namespace std;
long long memo[31];
int main() {
	int n;
	cin >> n;
	memo[0] = 1;
	for (int i = 2; i <= n; i+=2) {
		memo[i] = memo[i - 2] * 3;
		for (int j = i - 4; j >= 0; j -= 2)
			memo[i] += memo[j] * 2;
	}
	cout << memo[n] << '\n';
	return 0;
}
