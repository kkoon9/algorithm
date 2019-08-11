#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = N;i >= 0;i--) {
		for (int j = 0;j < N - i;j++)
			cout << " ";
		int count = 2*i - 1;
		for (int j = 0;j < count;j++)
			cout << "*";
		
		cout << '\n';
	}
	return 0;
}