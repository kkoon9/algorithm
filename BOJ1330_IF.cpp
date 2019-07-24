#include <iostream>
using namespace std;

void result(int a, int b);
int main() {
	int a, b;
	cin >> a >> b;
	result(a, b);
	return 0;
}

void result(int a, int b) {
	if (a == b)
		cout << "==\n";
	else if (a > b)
		cout << ">\n";
	else
		cout << "<\n";
}