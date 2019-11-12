#include <iostream>
#include <string>
using namespace std;
const int TEN = 10;

int main(void) {
	int rootNumber; // N 처음 입력받는 숫자
	int leftNumber; // A+ B 의 A 
	int rightNumber; // A + B 의 B
	int newNumber; // A+B
	int cycleCount = 0; //사이클 횟수

	cin >> rootNumber;
	leftNumber = rootNumber / TEN; // 십의 자리 숫자
	rightNumber = rootNumber % TEN; // 일의 자리 숫자

	while (1) {
		newNumber = leftNumber + rightNumber;
		cycleCount++;
		if (((TEN * rightNumber) + (newNumber % TEN)) == rootNumber)
			break;
		
		leftNumber = rightNumber;
		rightNumber = newNumber % TEN;
	}
	cout << cycleCount << endl;
	return 0;
}