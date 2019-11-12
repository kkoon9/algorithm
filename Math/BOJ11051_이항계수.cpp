#include <iostream>
using namespace std;
const int MAX = 1000 + 1; 
const int MOD = 10007;
int memo[MAX][MAX];

void DP(int N, int K);
int main() {

	int N, K;
	cin >> N >> K;
	if (N - K < K)
		K = N - K;
	DP(N, K);
	cout << memo[N][K] << endl;
	return 0;
}

void DP(int N, int K) {
	for (int N_num = 1;N_num <= N;N_num++) {
		memo[N_num][1] = N_num;
		for (int K_num = 0;K_num <= N_num;K_num++) {
			if (N_num == K_num || K_num == 0) {
				memo[N_num][K_num] = 1;
				continue;
			}
			memo[N_num][K_num] = memo[N_num - 1][K_num] + memo[N_num - 1][K_num - 1];
			memo[N_num][K_num] %= 10007;
		}
	}
}