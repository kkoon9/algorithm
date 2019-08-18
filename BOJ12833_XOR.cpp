#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	while (c--)
		a = a ^ b;
	cout << a << endl;
	return 0;
}