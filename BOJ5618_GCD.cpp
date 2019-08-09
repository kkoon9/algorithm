#include <iostream>
#include <vector>
using namespace std;
int GCD(int a, int b);
void D(int gcd); // 약수 출력
int main() {
	int n, gcd;
	cin >> n;
	vector <int> arr(n);
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	gcd = GCD(arr[0], arr[1]);
	if (n == 3)
		gcd = GCD(gcd, arr[2]);
	D(gcd);
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

void D(int gcd) {
	for (int i = 1;i <= gcd;i++) {
		if (gcd % i == 0)
			cout << i << '\n';
	}
}