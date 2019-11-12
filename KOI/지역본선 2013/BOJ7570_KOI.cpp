#include <iostream>
using namespace std;

const int MAX = 1000000 + 10;
int arr[MAX];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, r = 0, x= 0;
	cin >> N;
	for (int i = 1;i <= N;i++) {
		cin >> x;
		arr[x] = arr[x - 1] + 1;
		if (arr[x] > r) r = arr[x];
	}
	cout << N - r << endl;
	return 0;
}