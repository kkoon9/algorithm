#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N - i - 1;j++)
			cout << " ";
		cout << "*";
		for (int j = 0;j < 2 * i - 1;j++) {
			if (j % 2 == 0)
				cout << " ";
			else
				cout << "*";
		}
		if (i > 0)
			cout << "*";

		cout << '\n';
	}


	return 0;
}