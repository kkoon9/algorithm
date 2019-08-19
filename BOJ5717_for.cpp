#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int M, F;
	cin >> M >> F;
	while (!(M == 0 && F == 0)) {
		cout << M + F << endl;
		cin >> M >> F;
	}
}