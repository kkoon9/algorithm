#include <iostream>
using namespace std;

const int CNT = 10;
int main() {
	int T;
	cin >> T;
	for (int test_case = 1;test_case <= T; test_case++) {
		float sum = 0;
		int x;
		for (int i = 0;i < CNT;i++) {
			cin >> x;
			sum += x;
		}
		printf("#%d %1.f\n", test_case, sum / CNT);
	}
	return 0;
}