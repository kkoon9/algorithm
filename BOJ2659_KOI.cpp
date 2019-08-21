#include <iostream>

using namespace std;
const int SIZE = 4;

int ClockNum(int n);
int main() {
	int n;
	int res = 0;
	int arr[SIZE];
	for (int i = 0;i < SIZE;i++) {
		cin >> arr[i];
	}
	n = 1000 * arr[0] + 100 * arr[1] + 10 * arr[2] + arr[3];
	n = ClockNum(n); // 시계수 만들기
	for (int i = 1111; i <= n; i++) {
		if (ClockNum(i) == i) res++;
	}
	cout << res << endl;
}
int ClockNum(int n) {
	int i, a = n;
	for (i = 1; i < SIZE; i++) {
		n = (n / 1000) + (n % 1000 * 10);
		if (n < a) a = n;
	}
	return a;
}