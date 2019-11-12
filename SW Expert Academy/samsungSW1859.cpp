#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

const int SIZE = 1000000 + 1;
int arr[SIZE];

int main() {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		int N, x;
		long long count;
		long long max = 0;
		long long prices = 0;
		cin >> N;
		for (int i = 1;i <= N;i++) {
			cin >> arr[i];
		}
		max = arr[N];
		for (int j = N;j > 0;j--) {
			if (max >= arr[j])
				prices += (max - arr[j]);
			else
				max = arr[j];
		}
		cout << "#" << test_case << " " << prices << endl;
	}

	return 0;
}