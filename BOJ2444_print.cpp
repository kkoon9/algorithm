#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1;i <= N;i++) {
		for (int j = 0;j < N - i;j++)
			cout << " ";
		int count = 2*i - 1;
		for (int j = 0;j < count;j++)
			cout << "*";
		
		cout << '\n';
	}
	for (int i = N - 1;i >= 0;i--) {
		for (int j = 0;j < N - i;j++)
			cout << " ";
		int count = 2 * i - 1;
		for (int j = 0;j < count;j++)
			cout << "*";

		cout << '\n';
	}

	return 0;
}