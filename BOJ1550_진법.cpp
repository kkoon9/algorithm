#include <iostream>
#include <string>
using namespace std;

const int HEX = 16;

int Sqr(int n);
int main() {
	string str;
	int str_sz;
	int result = 0;
	cin >> str;
	str_sz = str.size();
	for (int i = 0;i < str_sz;i++) {
		int bmp = str[i];
		if (bmp >= 'A')
			bmp -= ('A' - 10);
		else
			bmp -= '0';
		result += bmp * Sqr(str_sz - i - 1);
	}
	cout << result << endl;
	return 0;
}

int Sqr(int n) {
	int result = 1;
	for (int i = 0;i < n;i++)
		result *= HEX;
	return result;
}