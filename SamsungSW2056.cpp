#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		string str, ans, year = "", month = "", day = "";
		int Imonth, Iday;
		cin >> str;
		year += str[0];
		year += str[1];
		year += str[2];
		year += str[3];
		month += str[4];
		month += str[5];
		day += str[6];
		day += str[7];
		Imonth = atoi(month.c_str());
		Iday = atoi(day.c_str());
		ans = year + '/' + month + '/' + day;
		if (year == "0000" || Imonth > 12 || Imonth == 0 || Iday > 31 || Iday == 0) {
			ans = "-1";
		}
		else {
			switch (Imonth) {
			case 4:
			case 6:
			case 9:
			case 11:
				if (Iday > 30)
					ans = "-1";
				break;

			case 2:
				if (Iday > 28)
					ans = "-1";
				break;
			default:
				break;
			}
		}
		cout << "#" << test_case << " " << ans << endl;
	}
	return 0;
}