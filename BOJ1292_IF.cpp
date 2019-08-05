#include <iostream>
using namespace std;

const int SIZE = 1000 + 100;

int main(void) {
	int A, B, sum = 0;
	int memo[SIZE];
	cin >> A >> B;
	for (int i = 1,j = 1;j <= B;i++) {
		int cnt = 0;
		while (cnt < i) {
			memo[j++] = i;
			cnt++;
		}
	}
	for (int i = A;i <= B;i++) {
		sum += memo[i];
	}
	cout << sum;
	return 0;
}