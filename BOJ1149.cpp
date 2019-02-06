#include <iostream>
using namespace std;
void min(int a, int b, int c) {
	if (a > b)
		if (b > c)
			cout << c << '\n';
		else
			cout << b << '\n';
	else
		if (a > c)
			cout << c << '\n';
		else
			cout << a << '\n';
}
int min(int a, int b) {
	if (a > b) return b;
	else return a;
}
int main() {
	int red = 0;
	int green = 0;
	int blue = 0;
	int i = 0;
	int N;
	cin >> N;
	for (i = 0; i < N; i++) {
		int r, g, b;
		cin >> r >> g >> b;
		r = min(green, blue) + r;
		g = min(red, blue) + g;
		b = min(red, green) + b;
		red = r, green = g, blue = b;
	}
	min(red, green, blue);
	return 0;
}
