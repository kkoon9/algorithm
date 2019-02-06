#include <iostream>
using namespace std;
struct Fibonacci {
	int zero = 0;
	int one = 0;
};// zero one count
int main() {
	struct Fibonacci arr[41];
	/* 0과 1만 초기화해준다. */
	arr[0].zero = 1;
	arr[0].one = 0;
	arr[1].zero = 0;
	arr[1].one = 1;
	for (int i = 2; i <= 40; i++) {
		arr[i].zero = arr[i - 2].zero + arr[i - 1].zero;
		arr[i].one = arr[i - 2].one + arr[i - 1].one;
	}
	int T;
	cin >> T;
	for (int test_case = 0; test_case < T; test_case++) {
		int x;
		cin >> x;
		cout << arr[x].zero << ' ' << arr[x].one << '\n';
	}
	return 0;
}
