#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int tsn(int n); // 3, 6, 9의 개수 출력

int main() {
	int N;
	cin >> N;
	for (int i = 1;i <= N;i++) {
		int ans = tsn(i);
		if (ans == 0) {
			cout << i << ' ';
		}
		else {
			for (int i = 0;i < ans;i++)
				cout << '-';
			cout << ' ';
		}
	}
	return 0;
}

int tsn(int n) {
	int count = 0;
	while (n != 0) {
		int end = n % 10;
		if (end == 3 || end == 6 || end == 9)
			count++;
		n /= 10;
	}
	return count;
}