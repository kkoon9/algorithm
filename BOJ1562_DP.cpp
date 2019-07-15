#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 101;
const int MOD = 1000000000;
int N;

int memo[10][MAX][1 << 10];

int stairNum(int start, int length, int number);
int main(void) {
	cin >> N;
	int result = 0;
	for (int start = 1; start <= 9; start++) {

		memset(memo, -1, sizeof(memo));

		result += stairNum(start, 1, 1 << start); //0으로 시작할 수 없음
		result %= MOD;
	}
	cout << result << endl;
	return 0;
}

int stairNum(int start, int length, int number) {
	if (length == N)
		return number == (1 << 10) - 1 ? 1 : 0;
	int &result = memo[start][length][number];
	if (result != -1)
		return result;
	result = 0;
	if (start - 1 >= 0)
		result += stairNum(start - 1, length + 1, number | 1 << (start - 1));
	if (start + 1 < 10)
		result += stairNum(start + 1, length + 1, number | 1 << (start + 1));
	result %= MOD;
	return result;
}