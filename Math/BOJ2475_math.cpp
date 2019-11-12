#include <iostream>
using namespace std;

const int SIZE = 5;
int main() {
	int sum = 0;
	for (int i = 0;i < SIZE;i++) {
		int x;
		cin >> x;
		sum += (x * x);
	}
	cout << sum % 10 << endl;
	return 0;
}