Container queue
==============
## queue이란?
- 한 쪽에서만 자료를 넣고 다른 한 쪽에서만 뺄 수 있는 자료구조이다.
- 컨테이너 어댑터이다. 그 외에는 stack과 prioriy_queue가 있다.
- queue를 사용하기 위해서는 **queue library**를 사용해야 한다.
## queue 특징
- First In First Out(FIFO)
- 입력과 출력이 다르므로 overflow를 조심해야 한다.
## deque 예시 코드
~~~cpp
#include <queue>
#include <iostream>
using namespace std;
int main() {
    queue <int> q; // list
    q.push(1); // queue에 원소를 삽입
    q.pop(1); // queue에 원소를 삭제
    q.front(); // queue에 맨 앞에 있는 원소를 출력
    q.back(); // queue에 맨 뒤에 있는 원소를 출력
    q.empty(); // queue가 비어있는지 확인 True and False
    return 0;
}
~~~
## queue 예제
[BOJ10828](./BOJ10828.cpp)