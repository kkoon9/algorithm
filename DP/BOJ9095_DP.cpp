#include <iostream>
using namespace std;

int memo[11];

int main() {
	memo[1] = 1;
	memo[2] = 2;
	memo[3] = 4;
	for (int i = 4; i <= 10; i++)
		memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3];
	int test_case;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		int n;
		cin >> n;
		cout << memo[n] << endl;
	}
	return 0;
}