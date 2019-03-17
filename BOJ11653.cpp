#include <iostream>
using namespace std;
void PF(int n) {
	for (int i = 2; i*i <= n; i++) {
		while (n%i == 0) {
			cout << i << '\n';
			n /= i;
		}
	}
	if (n > 1)
		cout << n << '\n';
}
int main() {
	int n;
	cin >> n;
	PF(n);
	return 0;
}