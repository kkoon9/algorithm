#include <iostream>
using namespace std;
int memo[1001];
int input[1001];
int max(int a, int b);
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> input[i];
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= i; j++) 
			memo[i] = max(memo[i], memo[i - j] + input[j]);
	cout << memo[n] << '\n';
	return 0;
}
int max(int a, int b) {
	if (a >= b) return a;
	else return b;
}