#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int str_size, sum = 10;
	cin >> str;
	str_size = str.size();
	char preIdx = str[0];
	for (int i = 1;i < str_size;i++) {
		if (preIdx == str[i])
			sum += 5;
		else {
			preIdx = str[i];
			sum += 10;
		}
	}
	cout << sum << endl;
	return 0;
}