#include <iostream>
using namespace std;
int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
int main() {
	int t;
	cin >> t;
	for (int test_case = 1; test_case <= t; test_case++) {
		int input[1001];
		int n, L_max, R_max, LRmax;
		int result = 0;
		cin >> n;
		for(int i = 1; i <= n; i++)
			cin >> input[i];
		if (n >= 5)
			for (int i = 5; i <= n; i++) {
				L_max = max(input[i - 4], input[i - 3]);
				R_max = max(input[i - 1], input[i]);
				LRmax = max(L_max, R_max);
				if (LRmax < input[i - 2])
					result += input[i - 2] - LRmax;
			}
		cout << "#" << test_case << " " << result << '\n';
	}
	return 0;
}