#include <iostream>
using namespace std;
const int SIZE = 6 + 1;
int arr[SIZE];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int res = 0;
	int m = 0;
	for (int i = 0;i < 3;i++) {
		int x;
		cin >> x;
		if (m < x)
			m = x;
		if (arr[x] == 1) {
			res += 1000;
			res += x * 100;
		}
		else if (arr[x] == 2) {
			res += 9000;
			res += x * 900;
		}
		arr[x]++;
	}
	if (res == 0)
		res = 100 * m;
	
	cout << res << endl;
}