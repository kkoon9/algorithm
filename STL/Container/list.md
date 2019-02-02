Container list
==============
## list란?
- 시퀀스 컨테이너이며 배열 기반 컨테이너이다.
- doubly linked list와 구조가 같다.
- list를 사용하기 위해서는 **list library**를 사용해야 한다.
## list 특징
- 노드 기반 컨테이너이다.
- vector, deque와는 다르게 멤버 함수에 정렬(sort, merge), 이어붙이기(splice)가 있다.
- 원소를 탐색할 때, 임의접근 반복자(at, [])는 불가능하고 양방향 반복자(++, --)를 이용해서 탐색을 한다.
## list 예시 코드
~~~cpp
#include <list>
#include <iostream>
using namespace std;
int main() {
    list<int> l = {2, 1, -5, 4, -3, 6, -7}; print(l); // 2 1 -5 4 -3 6 -7
    l.sort(); print(l); // -7 -5 -3 1 2 4 6
    l.sort(greater<int>()); print(l); // 6 4 2 1 -3 -5 -7
    l.sort([](int &u, int &v) {
    return abs(u) < abs(v);
    });
    print(l); // 1 2 -3 4 -5 6 -7
    l.reverse(); print(l); // -7 6 -5 4 -3 2 1
}
~~~
