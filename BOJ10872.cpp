#include <iostream>
using namespace std;
int f = 1;
void Fac(int n) {
	if (n == 0)
		return;
	f *= n;
	Fac(n - 1);
}
int main() {
	int n;
	cin >> n;
	Fac(n);
	cout << f << '\n';
	return 0;
}