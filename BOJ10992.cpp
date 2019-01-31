#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	int N;
	int length;
	cin >> N;
	length = 2 * N - 1;
	vector<vector<int>> p(N);
	for (int i = 0; i < N; i++)
		p[i].reserve(length);

	int i, j;
	i = j = (length - 1) / 2;
	while (--N) {
		for (int idx = 0; idx < length; idx++) {
			if (idx == i || idx == j)
				cout << "*";
			else
				cout << " ";
		}
		cout << '\n';
		i -= 1;
		j += 1;
	}
	for (int idx = 0; idx < length; idx++)
		cout << "*";
	cout << '\n';
	return 0;
}