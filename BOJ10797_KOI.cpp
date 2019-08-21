#include <iostream>
using namespace std;
const int SIZE = 5;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	int res = 0;
	cin >> N;
	for (int i = 0;i < SIZE;i++) {
		int x;
		cin >> x;
		if (N == x)
			res++;
	}
	cout << res << endl;
	return 0;
}