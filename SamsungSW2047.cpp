#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	int size = str.size();
	for (int i = 0;i < size;i++) {
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	cout << str << endl;
	return 0;
}