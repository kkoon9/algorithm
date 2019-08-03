#include <iostream>
using namespace std;
int Counting(int number);

int main(void) {
	string str;
	int str_sz;
	int time = 0;

	cin >> str;
	str_sz = str.size();

	for (int i = 0; i < str_sz; i++) {
		int strToInt = str[i] - 65;
		int bmp = Counting(strToInt);
		time += bmp;
	}
	cout << time << endl;

	return 0;
}

int Counting(int number) {
	int count;
	if (number < 3)
		count = 3;
	else if (number < 6)
		count = 4;
	else if (number < 9)
		count = 5;
	else if (number < 12)
		count = 6;
	else if (number < 15)
		count = 7;
	else if (number < 19)
		count = 8;
	else if (number < 22)
		count = 9;
	else if (number < 26)
		count = 10;
	else
		count = 0;
	return count;
}