#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool desc(int a, int b) {
	return a > b;
}

int main(void) {
	string str;
	cin >> str;
	sort(str.begin(), str.end(), desc);
	cout << str << endl;
	return 0;
}