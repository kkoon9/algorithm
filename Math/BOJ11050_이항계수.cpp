#include <iostream>
using namespace std;
const int MAX = 11;

void DP(int memo[]);
int BinCoe(int memo[], int N, int K);

int main() {

	int N, K;
	int memo[MAX];
	cin >> N >> K;
	DP(memo);
	cout << BinCoe(memo, N, K) << endl;
	return 0;
}

void DP(int memo[]) {
	memo[0] = 1;
	for (int i = 1;i < MAX;i++)
		memo[i] = memo[i - 1] * i;
}
int BinCoe(int memo[], int N, int K) {
	int result = 0;
	if (N >= K && K >= 0)
		result = memo[N] / (memo[K] * memo[N - K]);
	return result;
}
