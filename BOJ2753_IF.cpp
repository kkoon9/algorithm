#include <iostream>
using namespace std;

int result(int a);
int main() {
	int a;
	cin >> a;
	cout << result(a) << endl;
	return 0;
}

int result(int a) {
	int output;
	if (a % 100 == 0) {
		if (a % 400 == 0)
			output = 1;
		else
			output = 0;
	}
	else {
		if (a % 4 == 0)
			output = 1;
		else
			output = 0;
	}
	return output;
}