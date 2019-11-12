#include <iostream>
#include <algorithm>
using namespace std;
const int SIZE = 100000 + 10;
int x[SIZE];
int y[SIZE];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	int res = 0;
	cin >> N >> M;
	for (int i = 0;i < M;i++) 
		cin >> x[i] >> y[i];
	sort(x, x + M);
	sort(y, y + M);
	for (int i = 0;i < M;i++) {
		res += abs(x[i] - x[M / 2]) + abs(y[i] - y[M / 2]);
	}
	cout << res << endl;
	return 0;
}