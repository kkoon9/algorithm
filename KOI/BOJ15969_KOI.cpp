#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, x;
	int Max = -1;
	int Min = 1001;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> x;
		if (Max < x)
			Max = x;
		if (Min > x)
			Min = x;
	}
	cout << Max - Min << endl;
	return 0;
}