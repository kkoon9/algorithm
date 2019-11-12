#include <iostream>
using namespace std;

const int MAX = 501;

int max(int a, int b);
void DP(int arr[][MAX], int N);

int main() {
	int arr[MAX][MAX];
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
		for (int j = 0; j < i; j++)
			cin >> arr[j][i];

	/* 다이나믹 프로그래밍 */
	DP(arr, N);
	cout << arr[0][1] << '\n';
	return 0;
}

void DP(int arr[][MAX], int N) {
	for (int i = N - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			arr[j][i] += max(arr[j][i + 1], arr[j + 1][i + 1]);
}

int max(int a, int b) {
	return a > b ? a : b;
}
