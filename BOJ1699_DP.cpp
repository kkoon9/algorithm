#include <iostream>
using namespace std;
const int memoSize = 100001;

void DP(int memo[], int n);

int main() {
	int n;
	int memo[memoSize];
	cin >> n;	
	DP(memo, n);
	cout << memo[n] << '\n';
	return 0;
}

void DP(int memo[], int n) {
	for (int i = 0; i <= n; i++) {
		memo[i] = i;
		for (int j = 1; j*j <= i; j++)
			if (memo[i] > memo[i - j * j] + 1)
				memo[i] = memo[i - j * j] + 1;
	}
}