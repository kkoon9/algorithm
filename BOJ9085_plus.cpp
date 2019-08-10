#include <iostream>
using namespace std;

int main() {
	int T, N, x;
	cin >> T;
	for (int test_case = 1;test_case <= T;test_case++) {
		int sum = 0;
		cin >> N;
		for (int i = 0;i < N;i++) {
			cin >> x;
			sum += x;
		}
		cout << sum << endl;
	}
	return 0;
}