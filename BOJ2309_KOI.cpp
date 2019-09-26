#include <iostream>
#include <algorithm>
using namespace std;
const int SIZE = 9;
const int Height = -100;

int main(void) {
	int arr[SIZE];  /* 난쟁이들의 키 */
	int fakeVal = Height; /* 난쟁이들의 키 - 100 */
	int buf;
	int flag = 0;

	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
		fakeVal += arr[i];
	}

	for (int i = 0; i < SIZE - 1; i++) {
		buf = fakeVal - arr[i];
		if (buf <= 0) {
			continue;
		}

		for (int j = i + 1; j < SIZE; j++) {
			if (buf == arr[j]) {
				arr[i] = 0;
				arr[j] = 0;
				flag = 1;
				break;
			}
		}
		if (flag)/* 2중 for문 탈출구 */
			break;
	}
	sort(arr, arr+SIZE);
	for (int i = 2; i < SIZE; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}