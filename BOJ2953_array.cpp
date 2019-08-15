#include <iostream>
using namespace std;

const int SIZE = 6;
int main() {
	int arr[SIZE][SIZE];
	int max = 0;
	int maxNum;
	for (int i = 1;i < SIZE;i++) {
		int sum = 0;
		for (int j = 1;j < SIZE - 1;j++) {
			cin >> arr[i][j];
			sum += arr[i][j];
		}
		if (sum > max) {
			maxNum = i;
			max = sum;
		}
	}
	cout << maxNum << ' ' << max << endl;
	return 0;
}
