#include <iostream>
#include <string>

using namespace std;
const int memoSize = 130;
const int NSize = 300001;
int memo[memoSize];
int dp[NSize];

void DP(int memo[], int N) {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= memoSize; j++) {
			if (memo[j] <= i) {
				int tmp = dp[i - memo[j]];
				if (tmp != NSize && tmp + 1 < dp[i])
					dp[i] = tmp + 1;				
			}
		}
	}
}
int main() {
	int N; // input
	memo[1] = 1;
	for (int i = 2; i < memoSize; i++) {
		memo[i] = memo[i - 1] + (i)*(i + 1) / 2;
		//		cout << memo[i] << '\n';
	}
	cin >> N;
	for (int i = 1; i <= N; i++)
		dp[i] = NSize;	
	DP(memo, N);
	cout << dp[N] << '\n';
	return 0;
}