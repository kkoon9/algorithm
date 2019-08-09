#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v;
	int N, x;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());

	for (int a : v)
		cout << a << ' ';
	cout << '\n';

	return 0;
}