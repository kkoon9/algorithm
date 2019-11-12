/**
 * 문제 이름 : 피보나치 함수
 * 작성자 : kkoon9
 * 링크 : https://www.acmicpc.net/problem/1003
 * input x의 피보나치를 구할 때에 0이 출력되는 횟수와 1이 출력되는 횟수를 묻는 문제
 * */
#include <iostream>
using namespace std;
struct Fibonacci {
	int zero = 0;
	int one = 0;
};
void dp(struct Fibonacci memo[], int N);
void print(struct Fibonacci memo[], int T);

int main() {
	int const memoSize = 41; // memorization 배열의 크기
	int T; // Testcase
	struct Fibonacci memo[memoSize];

	dp(memo, memoSize);
	cin >> T;
	print(memo, T);
	return 0;
}
void dp(struct Fibonacci memo[], int N) {
	memo[0].zero = 1;
	memo[0].one = 0;
	memo[1].zero = 0;
	memo[1].one = 1;
	for (int i = 2; i < N; i++) {
		memo[i].zero = memo[i - 2].zero + memo[i - 1].zero;
		memo[i].one = memo[i - 2].one + memo[i - 1].one;
	}
}
void print(struct Fibonacci memo[], int T) {
	for (int test_case = 0; test_case < T; test_case++) {
		int x;
		cin >> x;
		cout << memo[x].zero << ' ' << memo[x].one << '\n';
	}

}
