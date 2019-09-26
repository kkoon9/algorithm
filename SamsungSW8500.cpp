#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		int N;
		cin >> N;
		int ans = N;
		int front = 0, back = 0;
		vector <int> v(N);
		for (int i = 0;i < N;i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		for (int i = 0;i < N - 1;i++) {
			if (i % 2 == 0) {
				ans += (v[i] + v[i] - front);
				front = v[i];
			}
			else {
				ans += (v[i] + v[i] - back);
				back = v[i];
			}
		}
		ans += (v[N - 1] + v[N - 1] - front - back);
		cout << "#" << test_case << ' ' << ans << endl;
	}
	return 0;
}
