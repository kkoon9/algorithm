Container set
==============
## set란?
- 연관 컨테이너로 key라 불리는 원소(value)의 집합으로 이루어져 있다.
- 모든 연관 컨테이너는 노드 기반 컨테이너이며 **균형 이진 트리**로 구현된다.
- list를 사용하기 위해서는 **set library**를 사용해야 한다.
## set 특징
- 정렬 기준이 있으므로 insert()에 의해 삽입된 원소는 자동 정렬된다.
- 모든 원소가 유일하다. 중복을 허용해야 한다면 multiset을 사용해야 한다.
- 시퀀스 컨테이너가 제공하는 순서와 관련된 함수류는 제공하지 않는다.
## set 예시 코드 [1]
~~~cpp
#include <iostream>
#include <set>
#include <functional>
using namespace std;
int main() {
	set<int> s1;
	set<int> s2 = { 1, 2, 3, 4, 5 };
	set<int> s3 = { 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3 };
	cout << "s1.size() = " << s1.size() << '\n'; //output : s1. size() = 0
	cout << "s2.size() = " << s2.size() << '\n'; //output : s4. size() = 3
	cout << "s3.size() = " << s3.size() << '\n'; //output : s3. size() = 5
	set<int, greater<int>> s4 = { 2,3,4,1 }; //output : 4 3 2 1
	for (int s : s4)
		cout << s << ' ';
	cout << '\n';
	return 0;
}
~~~
## set 예시 코드 [2]
~~~cpp
#include <iostream>
#include <set>
#include <functional>
using namespace std;
int main() {
	set<int> s;
	s.insert(1); s.insert(3); s.insert(2);
	for (int a : s)
		cout << a << ' ';  // output : 1 3 2
	cout << '\n';
	cout << "s.size() = " << s.size() << '\n'; //output : s. size() = 3
	pair<set<int>::iterator, bool> result = s.insert(4); // 중복 된게 없으므로 삽입 성공
	cout << "result iterator = " << *result.first << '\n'; //output : result iterator = 4
	cout << "result bool = " << result.second << '\n'; //output : result bool = 1
	auto result2 = s.insert(3); // 중복되므로 삽입 실패
	cout << "result2 iterator = " << *result2.first << '\n'; //output : result iterator = 3
	cout << "result2 bool = " << result2.second << '\n'; //output : result bool = 0
	return 0;
}
~~~
## set 예시 코드 [3]
~~~cpp
#include <iostream>
#include <set>
#include <functional>
using namespace std;
int main() {
	set<int> s = { 1,2,3,4,5 };
	s.erase(s.begin()); // 첫 번째 원소 삭제
	for (int a : s)
		cout << a << ' '; //output : 2 3 4 5
	cout << '\n';
	auto it = s.begin();
	++it;
	cout << "*it = " << *it << '\n'; //output : *it = 3
	it = s.erase(it);
	cout << "*it = " << *it << '\n'; //output : *it = 4
	for (int a : s)
		cout << a << ' '; //output : 2 4 5
	cout << '\n';
	return 0;
}
~~~
## set 예제
[BOJ10867](https://github.com/kkoon9/algorithm/blob/master/BOJ10867.cpp)  
[BOJ10815](https://github.com/kkoon9/algorithm/blob/master/BOJ10815.cpp)    
[BOJ10816](https://github.com/kkoon9/algorithm/blob/master/BOJ10816.cpp)
    