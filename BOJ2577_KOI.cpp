#pragma warning(disable: 4996)
#include <iostream>
using namespace std;
#define N 10
int arr[N];
void TheNumber(int _result);
int main(void) {
	int A, B, C; //input (100 <= A, B, C <= 1000)
	int result;
	scanf("%d %d %d", &A, &B, &C);
	result = A * B * C;
	TheNumber(result);
	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}

void TheNumber(int _result) {
	int bmp;
	while (1)
	{
		bmp = _result % 10; //일의 자리
		arr[bmp]++;
		_result /= 10;
		if (_result == 0)
			break;
	}
}
