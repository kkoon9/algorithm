#include <iostream>
#include <string>
using namespace std;

const int SIZE = 4;
int main() {
	int X, Y;
	int result = 0;
	int max = 0;
	for (int i = 0;i < SIZE;i++) {
		cin >> X >> Y;
		if (max < result) 
			max = result;
		result -= X;
		result += Y;
	}
	cout << max << endl;
	return 0;
}