#include <iostream>
using namespace std;

const int SIZE = 100000 + 1;
int memo[SIZE][3];

void DP(int N);
int main(void) {
	int N, result;
	cin >> N;
	DP(N);
	result = (memo[N][0] + memo[N][1] + memo[N][2]) % 9901;
	cout << result << endl;
	return 0;
}

void DP(int N) {
	memo[1][0] = memo[1][1] = memo[1][2] = 1;
	for (int i = 2;i <= N;i++) {
		memo[i][0] = (memo[i - 1][0] + memo[i - 1][1] + memo[i - 1][2]) % 9901;
		memo[i][1] = (memo[i - 1][0] + memo[i - 1][2]) % 9901;
		memo[i][2] = (memo[i - 1][0] + memo[i - 1][1]) % 9901;
	}
}