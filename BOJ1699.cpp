#include <iostream>
using namespace std;
int memo[100001];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		memo[i] = i;
		for (int j = 1; j*j <= i; j++) 
			if (memo[i] > memo[i - j * j] + 1) 
				memo[i] = memo[i - j * j] + 1;
	}
	cout << memo[n] << '\n';
	return 0;
}