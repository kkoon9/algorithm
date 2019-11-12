#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	string str;
	int sum = 0;
	cin >> str;
	int size = str.size();
	for (int i = 0;i < size;i++) {
		sum += str[i] - '0';
	}
	cout << sum << endl;
	return 0;
}