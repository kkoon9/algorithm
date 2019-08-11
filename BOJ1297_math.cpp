#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float A, B, C; 
	// A : 대각선, B : 높이 비율, C : 너비 비율
	cin >> A >> B >> C;
	float x = A * A;
	float bmp = 1 + ((C * C) / (B * B));
	x /= bmp;
	x = sqrt(x);
	int resultX = int(x);
	float y = A * A;
	bmp = 1 + ((B * B) / (C * C));
	y /= bmp;
	y = sqrt(y);
	int resultY = int(y);
	cout << resultX << ' ' << resultY << endl;
	return 0;
}