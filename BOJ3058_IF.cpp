#include <iostream>
using namespace std;

const int MAX = 101;
const int COUNT = 7;

void BOJ3058();
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		BOJ3058();
	}
	return 0;
}

void BOJ3058() {
	int x;
	int sum = 0;
	int min = 101;
	for (int i = 0;i < COUNT;i++) {
		cin >> x;
		if (x % 2 == 0) {
			sum += x;
			if (x < min)
				min = x;
		}
	}
	cout << sum << ' ' << min << endl;

}