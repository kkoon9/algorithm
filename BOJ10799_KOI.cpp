#include <iostream>
#include <string>
using namespace std;

int main() {
	int Lcount = 0; // 스택에 있는 ( 개수
	int result = 0;
	int flag = 0; // 스택 꼭대기 아래에 있는 원소가 (면 1, )면 2
	string input;
	cin >> input;
	int input_size = input.size();
	for (int it = 0; it < input_size; it++) {
		if (input[it] == '(') {
			flag = 1;
			Lcount++;
		}
		else {
			Lcount--;
			if (flag == 1) // (
				result += Lcount;
			else if (flag == 2) // )
				result += 1;
			flag = 2;
		}
	}
	cout << result << '\n';
	return 0;
}