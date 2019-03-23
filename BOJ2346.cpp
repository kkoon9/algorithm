#include <iostream>
#include <list>
using namespace std;
int main() {
	int n;
	list<pair<int, int>> l;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		l.push_back({ x,i });
	}

	auto it = l.begin();
	for (int i = 0; i < n - 1; i++) {
		cout << (it->second) << ' '; // 해당 step 원소 출력
		int step = it->first;
		if (step > 0) {
			auto temp = it;
			++temp;
			if (temp == l.end()) { // 해당 step 원소가 끝이었으면 시작으로 되돌려준다. 
				temp = l.begin();
			}
			l.erase(it);
			it = temp;
			for (int i = 1; i < step; i++) {
				++it;
				if (it == l.end()) {
					it = l.begin();
				}
			}
		}
		else if (step < 0) {
			step = -step;
			auto temp = it;
			if (temp == l.begin()) {
				temp = l.end();
			}
			--temp;
			l.erase(it);
			it = temp;
			for (int i = 1; i < step; i++) {
				if (it == l.begin()) {
					it = l.end();
				}
				--it;
			}
		}
	}

	cout << l.front().second << '\n';

	return 0;
}