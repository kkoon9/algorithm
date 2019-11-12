#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
const char vowel[SIZE] = { 'a','e','i','o','u' };

int main(void) {
	string str;
	getline(cin, str);
	int str_sz = str.size();
	for (int i = 0;i < str_sz;i++) {
		int flag = 0;
		cout << str[i];
		for (int idx = 0;idx < SIZE;idx++) {
			if (str[i] == vowel[idx]) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			i += 2;
		}
	}
	return 0;
}