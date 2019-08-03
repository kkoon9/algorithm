#include <iostream>
#include <string>
using namespace std;
const string END = "0";
const int TEN = 10;

int sum(string input);
int main(void) {
	string input;
	cin >> input;
	while (input != END) {
		int digRoot = sum(input);
		while (1) {
			if (digRoot < TEN) {
				cout << digRoot << endl;
				break;
			}
			else 
				digRoot = sum(to_string(digRoot));
		}
		cin >> input;
	}
	return 0;
}

int sum(string input) {
	int inp_sz = input.size();
	int digRoot = 0;
	for (int i = 0;i < inp_sz;i++)
		digRoot += input[i] - '0';
	return digRoot;
}