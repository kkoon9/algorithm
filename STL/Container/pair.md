Container pair
==============
## pair란?
- 연관 컨테이너로서 두 자료형을 묶을 때 사용한다.
- pair 안에 pair를 넣을 수도 있다.
- pair를 사용하기 위해서는 **utility library**를 사용해야 한다.
- 하지만! **algorithm, vector**에 포함하고 있어서 따로 include 하지 않아도 된다.
## pair 예시 코드
```{.C++}
#include <utility>
#include <iostream>
using namespace std;
int main() {
	pair<int, int> p1; //초기값 0
	cout << p1.first << ' ' << p1.second << '\n'; // output : 0 0
	p1 = make_pair(10, 20);
	cout << p1.first << ' ' << p1.second << '\n'; // output : 10 20
	p1 = pair<int, int>(30, 40);
	cout << p1.first << ' ' << p1.second << '\n'; // output : 30 40
	pair<int, int> p2(50, 60);
	cout << p2.first << ' ' << p2.second << '\n'; // output : 50 60

	pair<pair<int, int>, pair<int, int>> p =
		make_pair(make_pair(10, 20), make_pair(30, 40));
	cout << p.first.first << ' ' << p.first.second << ' ';
	cout << p.second.first << ' ' << p.second.second << '\n'; // output : 10 20 30 40

	return 0;
}
</pre></code>
```