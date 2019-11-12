#include <iostream>
using namespace std;

const int SIZE = 20 + 1;
const int CNT = 10;
int main() {
	int arr[SIZE];
	int a, b;
	for (int i = 1;i < SIZE;i++)
		arr[i] = i;
	
	for (int i = 0;i < CNT;i++) {
		cin >> a >> b;
		int cnt = (b - a) / 2;
		do {
			int bmp = arr[a];
			arr[a++] = arr[b];
			arr[b--] = bmp;
		} while (cnt--);
	}
	for (int idx = 1;idx < SIZE;idx++) {
		cout << arr[idx] << ' ';
	}
	cout << endl;
	return 0;
}