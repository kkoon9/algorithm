#include <iostream>
using namespace std;

const int CNT = 10;
int main() {
	int T;
	cin >> T;
	for (int test_case = 1;test_case <= T; test_case++) {
		int sum = 0;
		int x;
		for (int i = 0;i < CNT;i++) {
			cin >> x;
			if (x % 2 == 1) sum += x;
		}
		cout << "#" << test_case << " " << sum << endl;
	}
	return 0;
}
