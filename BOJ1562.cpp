#include <iostream>
using namespace std;
long long memo[101];
long long front[101][10];
long long back[101][10];
int main() {
	int N;
	cin >> N;
	memo[10] = 1;
	front[10][9] = 1;
	back[10][0] = 1;
	for (int i = 11; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			front[i][j] += front[i - 1][j];
			if (j == 0) {
				front[i][j + 1] += front[i - 1][j];
			}
			else if (j == 1) {
				front[i][j + 1] += front[i - 1][j];
			}
			else if (j == 9) {
				front[i][j - 1] += front[i - 1][j];
			}
			else {
				front[i][j + 1] += front[i - 1][j];
				front[i][j - 1] += front[i - 1][j];
			}
		}

		for (int j = 0; j < 10; j++) {
			back[i][j] += back[i - 1][j];
			if (j == 0) {
				back[i][j + 1] += back[i - 1][j];
			}
			else if (j == 9) {
				back[i][j - 1] += back[i - 1][j];
			}
			else {
				back[i][j + 1] += back[i - 1][j];
				back[i][j - 1] += back[i - 1][j];
			}
		}
		for (int j = 0; j < 10; j++) {
			memo[i] += front[i][j];
			memo[i] %= 1000000000;
			memo[i] += back[i][j];
			memo[i] %= 1000000000;
		}
		memo[i] /= 2;
		
	}
	cout << memo[N] << '\n';
}