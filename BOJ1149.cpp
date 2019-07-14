#include <iostream>
using namespace std;
int min(int a, int b, int c);
int dp(int N);

int main() {
	int N;
	int result;
	cin >> N;
	result = dp(N);
	cout << result << '\n';
	return 0;
}

int min(int a, int b, int c) {
	if (a > b)
		return b < c ? b : c;
	else
		return a < c ? a : c;
}
int dp(int N) {
	int red = 0, green = 0, blue =0;
	for (int i = 0; i < N; i++) {
		int R, G, B;
		cin >> R >> G >> B;
		R = (green < blue ? green : blue) + R;
		G = (red < blue ? red : blue) + G;
		B = (red < green ? red : green) + B;
		red = R, green = G, blue = B;
	}
	return min(red, green, blue);
}