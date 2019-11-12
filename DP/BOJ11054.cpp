#include <iostream>
using namespace std;
int memoI[1001];
int memoD[1001];
int input[1001];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> input[i];
	for (int i = 1; i <= n; i++) {
		memoI[i] = 1;
		for (int j = 1; j <= i; j++) 
			if (input[j] < input[i] && memoI[j] + 1 > memoI[i]) 
				memoI[i] = memoI[j] + 1;
	}
	for (int i = n; i >= 1; i--) {
		memoD[i] = 1;
		for (int j = i; j <= n; j++) 
			if (input[i] > input[j] && memoD[j] + 1 > memoD[i]) 
				memoD[i] = memoD[j] + 1;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) 
		if (ans < memoI[i] + memoD[i] - 1) 
			ans = memoI[i] + memoD[i] - 1;
	cout << ans << '\n';
	return 0;
}
