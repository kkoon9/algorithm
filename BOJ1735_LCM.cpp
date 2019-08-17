#include <iostream>
using namespace std;
typedef long long ll;
int GCD(int a, int b);
ll LCD(int a, int b);
int main() {
	ll A, B, C, D;
	cin >> A >> B >> C >> D;
	int mo = LCD(B, D);
	ll ja = A * mo / B + C * mo / D;
	ll mojaGCD = GCD(mo, ja);
	mo /= mojaGCD;
	ja /= mojaGCD;
	cout << ja << ' ' << mo << endl;
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
ll LCD(int a, int b) {
	ll g = GCD(a, b);
	return g * (a / g) * (b / g);
}