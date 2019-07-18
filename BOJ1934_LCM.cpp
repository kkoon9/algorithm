#include <iostream>
using namespace std;
int GCD(int a, int b);
int LCD(int a, int b);
int main() {
	int A, B, t;
	cin >> t;
	for (int test_case = 1; test_case <= t; test_case++) {
		cin >> A >> B;
		cout << LCD(A, B) << '\n';
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
int LCD(int a, int b) {
	int g = GCD(a, b);
	return g * (a / g) * (b / g);
}