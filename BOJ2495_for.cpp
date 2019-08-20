#include <iostream>
#include <string>
using namespace std;
const int SIZE = 8;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	for (int i = 0;i < 3;i++) {
		cin >> str;
		int length = 1;
		int max = 1;
		for (int i = 1;i < SIZE;i++) {
			if (str[i] == str[i - 1]) {
				length++;
				if (length > max)
					max = length;
			}
			else {
				length = 1;
			}
		}
		cout << max << endl;
	}
}