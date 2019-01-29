Container tie
==============
## tie
- tuple에서의 <> 사이에 변수가 들어갈 수 없는 문제를 해결하기 위해 사용될 수 있다.
- tie는 pair, tuple에 사용할 수 있다.
## tuple 예시 코드
```{.C++}
#include <tuple>
#include <iostream>
using namespace std;
int main() {
	tuple<int, int, int> t = make_tuple(1, 2, 3);
	int x, y, z;
	tie(x, y, z) = t;
	cout << x << ' ' << y ' ' << z << '\n'; //output : 1 2 3
	return 0;
}
```

## tie를 사용하여 swap을 해보자.
~~~cpp
#include <tuple>
#include <iostream>
using namespace std;
int main() {
	int a = 1, b = 2;
	// swap 1번째 방법
	int t = a;
	a = b;
	b = t;
	cout << a << ' ' << b << '\n'; // output : 2 1
	a = 1, b = 2;

	// swap 2번째 방법
	tie(a, b) = make_tuple(b, a);
	cout << a << ' ' << b << '\n'; // output : 2 1
	return 0;
~~~
