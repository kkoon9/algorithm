/**
 * 문제 이름 : 다리 놓기
 * 작성자 : kkoon9
 * 링크 : https://www.acmicpc.net/problem/1010
 * 강을 기준으로 동쪽과 서쪽에 다리를 놓기 적합한 곳을 M, N이라고 한다. (M <= N )
 * 최대한 많은 다리를 놓는다고 했을 때에 경우의 수를 구하는 문제
 * */
#include <iostream>
using namespace std;
const int MAX = 30;
long long memo[MAX][MAX];

void Clear(long long memo[][MAX]);
void DP(long long memo[][MAX], int M, int N);
int main() {
	int T, M, N;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		Clear(memo);
		cin >> M >> N;
		DP(memo, M, N);
		cout << memo[M][N] << endl;
	}
	return 0;
}

void Clear(long long memo[][MAX]) {
	for (int i = 1;i < MAX;i++)
		for (int j = 1; j < MAX;j++)
			memo[i][j] = 0;
	for (int i = 1;i < MAX;i++)
		memo[1][i] = i;

}

void DP(long long memo[][MAX], int M, int N) {
	for (int i = 2;i <= M;i++)
		for (int j = i; j <= N;j++) {
			if (i == j) {
				memo[i][j] = 1;
				continue;
			}
			memo[i][j] = memo[i][j - 1] + memo[i - 1][j - 1];
		}
}