#include <iostream>
using namespace std;

const int SIZE = 3;
int X[SIZE], Y[SIZE];

int result(int X[]);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int fX, fY;
	for (int i = 0;i < SIZE;i++)
		cin >> X[i] >> Y[i];
	fX = result(X);
	fY = result(Y);
	cout << fX << ' ' << fY << endl;
	return 0;
}

int result(int X[]) {
	int x = X[0];
	if (x == X[1])
		x = X[2];
	else if (x == X[2])
		x = X[1];
	return x;
}