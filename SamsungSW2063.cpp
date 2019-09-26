#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 200;
int main() {
	int N;
	int arr[MAX];
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	cout << arr[N / 2] << endl;
	return 0;
}