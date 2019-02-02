#include <iostream>
#include <set>
#include <functional>
using namespace std;
int main() {
	int n,x;
	cin >> n;
	set<int> s;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		s.insert(x);
	}
	for (int a : s)
		cout << a << ' ';
	cout << '\n';
	return 0;
}