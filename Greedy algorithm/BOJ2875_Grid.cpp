#include <iostream>
using namespace std;

int main() {
	int N, M, K;
	cin >> N >> M >> K;
	while (K--) {
		if (N >= 2 * M)
			N--;
		else
			M--;
	}
	if (N >= 2 * M)
		cout << M << endl;
	else
		cout << N / 2 << endl;
	return 0;
}
