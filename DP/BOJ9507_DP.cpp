#include <iostream>
using namespace std;

const int MAX = 67 + 1;

void DP(long long memo[]);
int main() {
	int t;
	long long memo[MAX];
	cin >> t;
	DP(memo);
	for (int test_case = 1;test_case <= t;test_case++) {
		int n;
		cin >> n;
		cout << memo[n] << endl;
	}
	return 0;
}

void DP(long long memo[]) {
	memo[0] = 1; memo[1] = 1;
	memo[2] = 2; memo[3] = 4;
	for (int i = 4;i < MAX;i++)
		memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3] + memo[i - 4];
}