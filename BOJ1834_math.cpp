#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int first = N + 1;
	long long sum = first;
	long long bmp = first;
	if (N == 1)
		sum = 0;
	for (int i = 1;i < N - 1;i++) {
		bmp += first;
		sum += bmp;
	}
	cout << sum << endl;

	return 0;
}