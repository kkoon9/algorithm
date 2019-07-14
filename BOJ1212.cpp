#include <iostream>
#include <string>
using namespace std;

void octNum(int x);
void firstNum(int x);

int main() {
	string s;
	cin >> s;
	int n = s.size();
	int x = s[0] - '0';
	firstNum(x);
	for (int i = 1; i < n; i++) {
		x = s[i] - '0';
		octNum(x);
	}
	return 0;
}
void firstNum(int x) {
	switch (x) {
	case 7:
		cout << "111";
		break;
	case 6:
		cout << "110";
		break;
	case 5:
		cout << "101";
		break;
	case 4:
		cout << "100";
		break;
	case 3:
		cout << "11";
		break;
	case 2:
		cout << "10";
		break;
	case 1:
		cout << "1";
		break;
	case 0:
		cout << "0";
		break;
	default:
		break;
	}
}
void octNum(int x) {
	switch (x) {
	case 7:
		cout << "111";
		break;
	case 6:
		cout << "110";
		break;
	case 5:
		cout << "101";
		break;
	case 4:
		cout << "100";
		break;
	case 3:
		cout << "011";
		break;
	case 2:
		cout << "010";
		break;
	case 1:
		cout << "001";
		break;
	case 0:
		cout << "000";
		break;
	default:
		break;
	}
}