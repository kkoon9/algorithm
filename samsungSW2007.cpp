#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		string str;
		cin >> str;
		int size = str.size();
		int j = 0;
		for (int i = 1;i < size;i++) {
			if (str[i] == str[j])
				j++;
			else
				j = 0;
		}
		cout << "#" << test_case << " " << size - j << endl;
	}

	return 0;
}