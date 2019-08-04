#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int N, sum = 0;
	cin >> N;
	vector <int> A(N);
	vector <int> B(N);
	for (int i = 0;i < N;i++)
		cin >> A[i];
	for (int i = 0;i < N;i++)
		cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	for (int i = 0;i < N;i++)
		sum += A[i] * B[N - 1 - i];
	
	cout << sum << endl;
	return 0;
}