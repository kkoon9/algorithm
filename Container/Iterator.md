Iterator 반복자
==============
## iterator란?
### iterator는 Container에 저장된 원소를 순회하고 접근하는 일반화된 방법을 제공한다.

## iterator의 범주?
- 입력(input) iterator : 현 위치의 원소를 한 번만 읽을 수 있는 반복자(istream)
- 출력(output) iterator : 현 위치의 원소를 한 번만 쓸 수 있는 반복자(ostream)
- 순방향(forward) iterator : 입출력 반복자 기능에 순방향 이동(++)이 가능한 재할당될 수 있는 반복자
- 양방향(bidirectional) iterator : 순방향 반복자 기능에 역방향 이동(--)이 가능한 반복자 (ex) list, set, multiset, map, multimap
- 임의 접근(random accress) iterator : 양방향 반복자 기능에 +, -, +=, -=, [] 연산이 가능한 반복자 (ex) vector와 deque
## iterator 예시 코드
~~~cpp
#include <iostream>
#include <vector>
using namespace std;
int main() {

	vector<int> v = { 10,20,30,40,50 };
	vector<int>::iterator iter = v.begin(); // iterator 선언
	cout << iter[3] << '\n';  // output : 40
	iter += 2; // iter의 초기값 0
	cout << *iter << ' '; // output : 30
	cout << '\n';

	// 반복
	for (iter = v.begin(); iter != v.end(); ++iter) {
		cout << *iter << ' '; // output : 10 20 30 40 50
	}
	cout << '\n';

	return 0;
}
~~~