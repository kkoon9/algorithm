#include <iostream>
using namespace std;

const int COUNT = 10;
int main() {
	int sum;
	cin >> sum;
	for (int i = 1;i < COUNT;i++) {
		int x;
		cin >> x;
		sum -= x;
	}
	cout << sum << endl;
	return 0;
}
