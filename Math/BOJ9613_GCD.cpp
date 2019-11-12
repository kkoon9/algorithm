#include <iostream>
using namespace std;
int GCD(int a, int b);
int main() {
	int  t;
	cin >> t;
	for (int test_case = 1; test_case <= t; test_case++) {
		int n;
		long long g_sum = 0;
		cin >> n;
		int *array = new int[n];
		for (int i = 0; i < n; i++) 
			cin >> array[i];
		
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++)
				g_sum += GCD(array[i], array[j]);
		}
		cout << g_sum << '\n';
		delete[] array;
	}
	return 0;
}
int GCD(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}