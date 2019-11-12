#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	int size = str.size();
	for (int i = 0;i < size;i++) {
		cout << str[i] - 'A' + 1 << ' ';
	}
	return 0;
}