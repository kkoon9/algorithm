#include <iostream>
using namespace std;
int GCD(int a, int b);
int LCM(int a, int b);
int main() {
	int A, B;
	cin >> A >> B;
	cout << GCD(A, B) << '\n' << LCD(A, B) << '\n';
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
int LCM(int a, int b) {
	int g = GCD(a, b);
	return g * (a / g) * (b / g);
}