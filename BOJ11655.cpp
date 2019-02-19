#include <iostream>
using namespace std;
const int ARR_SIZE = 101;
int main() {
	char big[26];
	char small[26];
	char input[ARR_SIZE];
	for (int i = 0; i < 13; i++) {
		big[i] = i + 65 + 13; // 65 = A
		small[i] = i + 97 + 13;// 97 = a
		big[i + 13] = i + 65;
		small[i + 13] = i + 97;
	}
	cin.getline(input, ARR_SIZE, '\n');
	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] >= 'A' && input[i] <= 'Z')
			cout << big[input[i] - 65];
		else if (input[i] >= 'a' && input[i] <= 'z')
			cout << small[input[i] - 97];
		else
			cout << input[i];
	}
	cout << '\n';
	return 0;
}