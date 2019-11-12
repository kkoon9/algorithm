#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
const int SIZE = 10 + 10;
int arr[SIZE];
int main() {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		int N;
		cin >> N;
		printf("#%d\n1\n", test_case);
		arr[0] = 0;	arr[1] = 1;	arr[2] = 0;
		for (int i = 1;i < N;i++) {
			int bmp[SIZE];
			for (int j = 1;j < i + 2;j++) {
				bmp[j] = arr[j - 1] + arr[j];
				cout << bmp[j] << ' ';
			}
			cout << endl;
			for (int j = 1;j < i + 2;j++)
				arr[j] = bmp[j];
			arr[i + 2] = 0;
		}
	}

	return 0;
}