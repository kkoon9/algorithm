#include <iostream>
using namespace std;
const int HOUR = 24;
const int MIN = 60;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, C;
	int H, M;
	cin >> A >> B >> C;
	H = C / MIN;
	M = C % MIN;
	A += H;
	B += M;
	if (B >= MIN) {
		A += 1;
		B -= MIN;
	}
	if (A >= HOUR) {
		A -= HOUR;
	}
	cout << A << ' ' << B << endl;
	return 0;
}