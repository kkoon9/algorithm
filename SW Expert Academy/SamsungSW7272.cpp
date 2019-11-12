#include <iostream>
#include <string>
using namespace std;
char hole_one[6] = { 'A','D','O','P','Q','R' };
char hole_two = 'B';
int main() {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		string str1, str2;
		string result = "SAME";
		cin >> str1 >> str2;
		int size_str1 = str1.size();
		int size_str2 = str2.size();
		if (size_str1 != size_str2) {
			result = "DIFF";
		}
		else {
			for (int i = 0; i < size_str1; i++) {
				int hole1 = 0, hole2 = 0;
				if (str1[i] == 'B') hole1 = 2;
				if (str2[i] == 'B') hole2 = 2;
				for (int j = 0; j < 6; j++) {
					if (str1[i] == hole_one[j]) hole1 = 1;
					if (str2[i] == hole_one[j]) hole2 = 1;
				}
				if (hole1 != hole2) {
					result = "DIFF";
					break;
				}
			}
		}
		cout << "#" << test_case << " " << result << '\n';
	}
	return 0;
}