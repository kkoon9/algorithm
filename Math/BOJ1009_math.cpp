#include <iostream>
using namespace std;

const int MOD_A = 10;
const int MOD_B = 4;

int OneNum(int n);
int main() {
	int T;
	cin >> T;
	for (int i = 0;i < T;i++) {
		int a, b;
		cin >> a >> b;
		a %= MOD_A;
		if (a == 0)
			a = MOD_A;
		b %= MOD_B;
		if (b == 0)
			b = MOD_B;
		int bmp = 1;
		for (int i = 0;i < b;i++)
			bmp *= a;
		//cout << "a : " << a << endl;
		//cout << "b : " << b << endl;
		//cout << "bmp : " << bmp << endl;
		cout << OneNum(bmp) << endl;
	}
	return 0;
}
int OneNum(int n) {
	while ((n / 10) != 0) {
		n %= 10;
	}
	if (n % 10 == 0)
		return 10;
	return n % 10;
}