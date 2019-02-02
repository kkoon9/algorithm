Container deque
==============
## deque란?
- 시퀀스 컨테이너이며 배열 기반 컨테이너이다.
- vector 컨테이너의 단점을 보완하는 특징을 갖는다.
- pair를 사용하기 위해서는 **deque library**를 사용해야 한다.
## deque 특징
- 크기가 가변적이다.
- 중간에 데이터 삽입 및 삭제가 용이하지 않다.
- 구현이 어렵다.
- 랜덤 접근이 가능하다.
## deque 예시 코드
~~~cpp
#include <deque>
#include <iostream>
using namespace std;
int main() {
    deque<int> d; // deque 선언
    d.push_back(1); // deque의 맨 끝에 push
    d.push_front(2); // deque의 맨 앞에 push
    d.pop_back(); // deque의 맨 끝에 있는 원소를 pop
    d.pop_front(); // deque의 맨 앞에 있는 원소를 pop
    return 0;
}
~~~
## deque 예제
[BOJ10866](../BOJ10866.cpp)