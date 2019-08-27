#include <iostream>
#include <list>
using namespace std;

int main(void) {
	int N, x;
	list <int> l;
	cin >> N;
	cin >> x;
	l.push_back(1);
	for (int i = 2;i <= N;i++) {
		cin >> x;
		auto lbegin = l.begin();
		for (int i = 0;i < x;i++)
			lbegin++;
		l.insert(lbegin, i);
	}
	for (auto i = l.rbegin(); i !=l.rend();i++)
		cout << *i << ' ';
	cout << endl;
	return 0;
}