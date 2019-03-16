#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int n = s.size();
	int x = s[0] - '0';
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
		return 0;
	default:
		break;
	}
	for (int i = 1; i < n; i++) {
		x = s[i] - '0';
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
	cout << '\n';
	return 0;
}