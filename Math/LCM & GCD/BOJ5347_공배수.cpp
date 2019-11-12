#include <iostream>
using namespace std;
int GCD(int a, int b);
long long LCM(int a, int b);
int main() {
	int T, A, B;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		cin >> A >> B;
		cout << LCM(A, B) << '\n';
	}
	return 0;
}
int GCD(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long LCM(int a, int b) {
	long long g = GCD(a, b);
	return g * (a / g) * (b / g);
}