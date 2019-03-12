#include <iostream>
using namespace std;
long long memo[101] = { 0,1,1,1,2,2,3,4,5 };
int main() {
	int n,t;
	cin >> t;
	for (int i = 9; i <= 101; i++) 
		memo[i] = memo[i - 1] + memo[i - 5];
	for (int test_case = 1; test_case <= t; test_case++) {
		cin >> n;
		cout << memo[n] << '\n';
	}
	return 0;
}
