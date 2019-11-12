#include <iostream>
using namespace std;

const int MAX = 41;
int memo[MAX];

void DP(int memo[], int N);
int main() {
	int N,M;
	long long result = 1;
	int fix;
	int pin = 1; // 고정석 위치 초기값은 1이다.

	cin >> N;
	DP(memo,N);

	cin >> M;
	for (int i = 1; i <= M; i++) {
		cin >> fix;
		result *= memo[fix - pin];
		pin = fix + 1; // 고정석 위치 다음에 pin을 설정한다.
	}
	result *= memo[N - pin + 1]; // 마지막 pin과 좌석 끝
    cout << result << '\n';
}

void DP(int memo[], int N){
    memo[0] = 1;
	memo[1] = 1;
	memo[2] = 2;
	for (int i = 3; i <= N; i++) 
		memo[i] = memo[i - 1] + memo[i - 2];

}
