#include <iostream>
using namespace std;
const int HOUR = 24;
const int MIN = 60;
const int SEC = 60;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, C, D;
	int H, M, S;
	cin >> A >> B >> C >> D;
	S = D % SEC;
	M = D / SEC;
	H = M / MIN;
	M = M % MIN;
	A += H;
	B += M;
	C += S;
	while (C >= SEC) {
		B += 1;
		C -= SEC;
	}
	while (B >= MIN) {
		A += 1;
		B -= MIN;
	}
	while (A >= HOUR) {
		A -= HOUR;
	}
	cout << A << ' ' << B << ' ' << C << endl;
	return 0;
}