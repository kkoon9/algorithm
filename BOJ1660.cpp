#include <iostream>
#include <string>

using namespace std;
const int memoSize = 126;
int memo[memoSize];
int main() {
	int N; // input
	int result = 0;
	memo[1] = 1;
	for (int i = 2; i < memoSize; i++) {
		memo[i] = memo[i - 1] + (i)*(i + 1) / 2;
		cout << memo[i] << '\n';
	}
	cin >> N;
	for (int i = memoSize - 1; i > 0; i--) {
		while (N >= memo[i]) {
			N -= memo[i];
			cout << memo[i] << '\n';
			result++;
		}
		if (N == 0)break;
	}
	cout << result << '\n';
	return 0;
}