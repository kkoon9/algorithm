#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
const int SIZE = 15 + 2;
int arr[SIZE][SIZE];
int main() {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		int N, M;
		int max = -1;
		int sum = 0;
		cin >> N >> M;
		for (int i = 0;i < N;i++) {
			for (int j = 0;j < N;j++) {
				cin >> arr[j][i];
			}
		}
		for (int i = 0;i <= N - M;i++) {
			for (int j = 0;j <= N - M;j++) {
				int sum = 0;
				for (int idx = i;idx < i + M;idx++) 
					for (int jdx = j; jdx < j + M;jdx++)
						sum += arr[jdx][idx];
				
				if (max < sum)
					max = sum;
			}
		}
		cout << "#" << test_case << " " << max << endl;
	
	}

	return 0;
}