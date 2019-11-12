#include <iostream>
using namespace std;


int main() {
	float A, B, C, D;
	float arr[4];
	float max;
	int maxIdx = 0;

	cin >> A >> B >> C >> D;
	arr[0] = A / C + B / D;
	arr[1] = C / D + A / B;
	arr[2] = D / B + C / A;
	arr[3] = B / A + D / C;
	max = arr[0];
	for (int i = 1;i < 4;i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxIdx = i;
		}
	}
	cout << maxIdx << endl;

}
