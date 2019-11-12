#include <iostream>
using namespace std;

# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )

void SelectionSort(int arr[], int size, int count) {
	int i, j, max, temp;
	int flag = 0;

	// 마지막 숫자는 자동으로 정렬되기 때문에 (숫자 개수-1) 만큼 반복한다.
	for (i = 0; i< size - 1; i++) {
		max = i;
		
		// 최댓값을 탐색
		for (j = i + 1; j<size; j++) {
			if (arr[j] >= arr[max])
				max = j;
		}
		if (i != max) 
			SWAP(arr[i], arr[max], temp);
		
		flag++;
		if (flag == count)
			return;
	}
}
void Print(int arr[], int size) {
	for (int i = 0; i < size; i++) 
		cout << arr[i];
	cout << '\n';
}
int main() {
	int t;
	cin >> t;
	for (int test_case = 1; test_case <= t; test_case++) {
		int input[6];
		char x;
		int i = 0;
		while (scanf_s("%1c", &x)) {
			if (x == ' ') {
				printf("끝!\n");
				break;
			}
			input[i++] = x - '0';
			printf("%d\n", i);
		}
		int n;
		cin >> n;
		printf("i : %d\n", i);
		SelectionSort(input, i, n);
		
		cout << "#" << test_case << " ";
		Print(input, i);
	}
	return 0;
}