#pragma warning(disable: 4996)
#include <iostream>
using namespace std;
const int CNT = 7;
const int MAX = 100;

void SumNMin(int input[]);

int main() {
	int input [CNT];
	for (int i = 0;i < CNT;i++) 
		cin >> input[i];
	SumNMin(input);
}

void SumNMin(int input[]) {
	int sum = 0, min = MAX;
	for (int i = 0;i < CNT;i++) {
		if (input[i] % 2 == 1) {
			sum += input[i];
			if (input[i] < min)
				min = input[i];
		}
	}
	if (sum == 0) {
		cout << "-1";
	}
	else
		cout << sum << '\n' << min << '\n';
}