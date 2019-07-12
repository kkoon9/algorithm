#include <iostream>
using namespace std;

const int Nsize = 1000001;
int memo[Nsize];

void dp(int arr[], int N) {
	for (int i = 2; i <= N; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= 15746;
	}
}
int main() {
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	memo[0] = 1; memo[1] = 1;
	dp(memo, N);
	cout << memo[N] << '\n';
	return 0;
}