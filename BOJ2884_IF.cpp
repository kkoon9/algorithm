#include <iostream>
using namespace std;
const int FIFTEEN = 15;
const int TWENTY_THREE = 23;
int main() {
	int H, M;
	cin >> H >> M;
	if (H >= 1) {
		if (M >= FIFTEEN * 3)
			M -= FIFTEEN * 3;
		else {
			H -= 1;
			M += FIFTEEN;
		}
	}
	else {
		if (M >= FIFTEEN * 3)
			M -= FIFTEEN * 3;
		else {
			H = TWENTY_THREE;
			M += FIFTEEN;
		}
	}
	cout << H << ' ' << M << endl;

	return 0;
}