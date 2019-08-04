#include <iostream>
#include <string>

using namespace std;
const int SIZE = 8;
int main(void) {
	string str[SIZE];
	int cnt = 0;
	for (int i = 0;i < SIZE;i++)
		cin >> str[i];
	
	for (int i = 0;i < SIZE;i++) {
		if (i % 2 == 0) {
			for (int idx = 0;idx < SIZE;idx += 2) {
				if (str[i][idx] == 'F')
					cnt++;
			}
		}
		else {
			for (int idx = 1;idx < SIZE;idx += 2) {
				if (str[i][idx] == 'F')
					cnt++;

			}
		}
	}
		cout << cnt << endl;
	return 0;
}