#include <iostream>
using namespace std;

const int MAX = 31;
long long memo[MAX];

void DP(int memo[], int n);
int main() {
	int n;
	cin >> n;
	DP(memo, n);
	cout << memo[n] << '\n';
	return 0;
}

void DP(int memo[], int n){
	memo[0] = 1;
	for (int i = 2; i <= n; i+=2) {
		memo[i] = memo[i - 2] * 3;
		for (int j = i - 4; j >= 0; j -= 2)
			memo[i] += memo[j] * 2;
	}
}
