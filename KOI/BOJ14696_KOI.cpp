#include <iostream>
using namespace std;

const int SIZE = 5;

void init(int A[], int B[]);
int main() {
	int N;
	int a, b, bmp;
	int A[SIZE];
	int B[SIZE];
	cin >> N;
	for (int round = 1;round <= N;round++) {
		init(A, B);
		char res = 'D';
		cin >> a;
		for (int i = 0;i < a;i++) {
			cin >> bmp;
			A[bmp]++;
		}
		cin >> b;
		for (int i = 0;i < b;i++) {
			cin >> bmp;
			B[bmp]++;
		}
		for (int i = 4;i > 0;i--) {
			if (A[i] > B[i]) {
				res = 'A';
				break;
			}
			else if (A[i] < B[i]) {
				res = 'B';
				break;
			}
		}
		cout << res << endl;
	}

	return 0;
}
void init(int A[], int B[]) {
	for (int i = 0;i < SIZE;i++) {
		A[i] = 0;
		B[i] = 0;
	}
}