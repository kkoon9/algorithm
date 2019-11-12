/**
 * 문제 이름 : RGB 거리
 * 작성자 : kkoon9
 * 링크 : https://www.acmicpc.net/problem/1149
 * R, G, B로 칠할 때의 비용이 input으로 주어진다.
 * 인접한 이웃끼리 같은 색으로 칠할 수 없다.
 * 거리의 집들을 RGB로 칠할 때에 드는 최소비용을 구하는 문제이다.
 * */
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