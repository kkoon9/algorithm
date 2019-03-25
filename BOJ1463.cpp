// Top-Down 방식
#include <iostream>
using namespace std;
int memo[1000001];
int MakeOne(int n) {
	if (n == 1)
		return 0;
	if (memo[n] > 0)
		return memo[n];
	memo[n] = MakeOne(n - 1) + 1;
	if (n % 2 == 0) {
		int temp = MakeOne(n / 2) + 1;
		if (memo[n] > temp)
			memo[n] = temp;
	}
	if (n % 3 == 0) {
		int temp = MakeOne(n / 3) + 1;
		if (memo[n] > temp)
			memo[n] = temp;
	}
	return memo[n];
}
int main() {
	int n;
	cin >> n;
	cout << MakeOne(n) << '\n';
	return 0;	
}

// Bottom-up 방식
#include <iostream>
using namespace std;
int memo[1000001]; // N의 최대값이 1000000이므로
int main() {
	int n;
	cin >> n;
	memo[1] = 0;
	for (int i = 2; i <= n; i++) {
		memo[i] = memo[i - 1] + 1; // 기본 memo[i]에 들어갈 수
		if (i % 2 == 0 && memo[i] > memo[i / 2] + 1) {
			memo[i] = memo[i / 2] + 1;
		}
		if (i % 3 == 0 && memo[i] > memo[i / 3] + 1) {
			memo[i] = memo[i / 3] + 1;
		}
	}
	cout << memo[n] << '\n';
	return 0;
}
