#include <iostream>
using namespace std;
int max(int a, int b) {
	if (a > b)return a;
	else return b;
}
int main() {
	int arr[501][501];
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) 
		for (int j = 0; j < i; j++) 
			cin >> arr[j][i];
	/* 다이나믹 프로그래밍 */
	for (int i = N-1; i > 0; i--) 
		for (int j = 0; j < i; j++) 
			arr[j][i] += max(arr[j][i + 1], arr[j + 1][i + 1]);
	cout << arr[0][1] << '\n';
	return 0;
}
