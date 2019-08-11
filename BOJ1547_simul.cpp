#include <iostream>
using namespace std;

int main() {
	int M;
	int X, Y;
	int ans = 1;
	cin >> M;
	for (int i = 0;i < M;i++) {
		cin >> X >> Y;
		if (X == ans)
			ans = Y;

		else if (Y == ans)
			ans = X;
	}
	cout << ans << endl;
	return 0;
}