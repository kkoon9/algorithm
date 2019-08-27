#include <iostream>
#include <algorithm>
using namespace std;
const int ArrSize = 9;
const int Height = -100;

int compare(const void* a, const void* b)    // 오름차순 비교 함수 구현
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
		return -1;

	if (num1 > num2)
		return 1;

	return 0;
}
int main(void) {
	int arr[ArrSize];  /* 난쟁이들의 키 */
	int fakeVal = Height; /* 난쟁이들의 키 - 100 */
	int buf;
	int flag = 0;

	for (int i = 0; i < ArrSize; i++) {
		cin >> arr[i];
		fakeVal += arr[i];
	}

	for (int i = 0; i < ArrSize - 1; i++) {
		buf = fakeVal - arr[i];
		if (buf <= 0) {
			continue;
		}

		for (int j = i + 1; j < ArrSize; j++) {
			if (buf == arr[j]) {
				arr[i] = 0;
				arr[j] = 0;
				flag = 1;
				break;
			}
		}
		if (flag)/* 2중 for문 탈출구 */
			break;
	}
	qsort(arr, ArrSize, sizeof(int), compare);
	for (int i = 0; i < ArrSize; i++) {
		if (arr[i] == 0)
			continue;
		printf("%d\n", arr[i]);
	}

	return 0;
}