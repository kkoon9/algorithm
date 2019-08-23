#include <iostream>
using namespace std;
const int SIZE = 97 + 10;
bool check[SIZE];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, P, cnt = 1;
	cin >> N >> P;
	int x = N;
	int x1;
	x *= N;
	x %= P;
	while (!check[x]) {
		check[x] = true;
		x *= N;
		x %= P;
	}
	x1 = x;
	x *= N;
	x %= P;
	while (x != x1) {
		cnt++;
		x *= N;
		x %= P;
	}
	cout << cnt << endl;
	return 0;
}