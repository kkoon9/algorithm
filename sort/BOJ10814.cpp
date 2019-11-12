#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Person {
	string name;
	int age, join;
};

bool cmp(const Person &u, const Person &v) {
	if (u.age < v.age) {
		return true;
	}
	else if (u.age == v.age) {
		if (u.join < v.join) {
			return true;
		}
	}
	return false;
}
int main() {
	int n;
	cin >> n;
	vector<Person> a(n);
	for (int i = 0; i<n; i++) {
		cin >> a[i].age >> a[i].name;
		a[i].join = i + 1;
	}

	sort(a.begin(), a.end(), cmp);

	for (int i = 0; i<n; i++) {
		cout << a[i].age << ' ' << a[i].name << '\n';
	}

	return 0;
}