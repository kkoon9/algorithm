#include <iostream>
using namespace std;

const int MAX = 30 + 1;
int memo[MAX];

void DP(int memo[]);
int main() {
	int T, k;
	cin >> T;
	DP(memo);
	for (int i = 0;i < T;i++) {
		cin >> k;
		cout << memo[k] << endl;
	}
	return 0;
}
void DP(int memo[]) {
	memo[1] = 1;
	for (int i = 2;i < MAX;i++) {
		memo[i] = memo[i - 1] * 2 + 1;
	}
}