Container tuple
==============
## tuple란?
- pair와 같은 연관 컨테이너지만 pair와는 다르게 여러 자료형을 묶을 때 사용한다.
- get을 이용하여 인덱스로 접근해야 한다.
- tuple를 사용하기 위해서는 **tuple library**를 사용해야 한다.
## tuple 예시 코드
```{.C++}
#include <tuple>
#include <iostream>
using namespace std;
int main() {
	tuple<int, int, int> t1 = make_tuple(1, 2, 3);
	cout << get<0>(t1) << ' '; // <>사이에 변수는 들어갈 수 없다.
	cout << get<1>(t1) << ' ';
	cout << get<2>(t1) << '\n'; // output : 1 2 3
	return 0;
}

```

## Q. <> 사이에 변수가 들어갈 수 없으면 위 코드처럼 일일이 써줘야 할까?
### [tie](./tie.md) Container를 사용하자!
