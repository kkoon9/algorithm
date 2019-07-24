#include <iostream>
using namespace std;

int OnePrint(int a);
int TenPrint(int a);
int HunPrint(int a);

int main() {
	int a, b;
	cin >> a >> b;
	cout << a * OnePrint(b) << '\n';
	cout << a * TenPrint(b) << '\n';
	cout << a * HunPrint(b) << '\n';
	cout << a * b << '\n';
}

int OnePrint(int a) {
	return a % 10;
}
int TenPrint(int a) {
	return (a % 100) / 10;
}
int HunPrint(int a) {
	return a / 100;
}