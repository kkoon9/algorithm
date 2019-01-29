#include <iostream>
using namespace std;
int main() {
	int N, x, sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		scanf_s("%1d", &x); // %1d : 숫자 하나씩 입력을 받을 수 있다.
		sum += x;
	}
	cout << sum << '\n';
    return 0;
}