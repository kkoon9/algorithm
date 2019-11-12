#include <iostream>
2using namespace std;

int ZeroCount(int n);

// 더 나은 코드
int main() {
	int n;
	cin >> n;
	cout << ZeroCount(n) << '\n';
	return 0;
}

int  ZeroCount(int n) {
	int ans = 0;
	for (int i = 5; i <= n; i *= 5) {
		ans += n / i;
	}
	return ans;
}
/*
const int memoSize = 501;
int memo[memoSize]; // 소인수 분해 했을 때 소수들의 각 개수

void PF(int n);
void Fac(int n);

void PF(int n) {
	for (int i = 2; i*i <= n; i++) {
		while (n%i == 0) {
			memo[i]++;
			n /= i;
		}
	}
	if (n > 1)
		memo[n]++;
}
void Fac(int n) {
	if (n == 0)
		return;
	PF(n);
	Fac(n - 1);
}
int main() {
	int n;
	cin >> n;
	Fac(n);
	cout << memo[5] << '\n';
	return 0;
}
*/