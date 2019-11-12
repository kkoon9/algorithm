#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	int n;
	string name, inout;
	cin >> n;
	set <string> s;
	for (int i = 1; i <= n; i++) {
		cin >> name >> inout;
		if (inout == "enter") {
			s.insert(name);
		}
		else {
			s.erase(name);
		}
	}
	for (auto it = --s.end(); it != s.begin(); it--) 
		cout << *it << '\n';
	cout << *s.begin() << '\n';
	return 0;
}
