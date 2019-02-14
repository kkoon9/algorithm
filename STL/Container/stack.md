Container stack
==============
## stack이란?
- 한 쪽에서만 자료를 넣고 뺄 수 있는 자료구조이다.
- 대표적인 컨테이너 어댑터이다. 그 외에는 queue와 prioriy_queue가 있다.
- stack 컨테이너의 디폴트 컨테이너는 deque 컨테이너이다.
- stack를 사용하기 위해서는 **stack library**를 사용해야 한다.
## stack 특징
- Last In First Out(LIFO)
- 오직 최상위에 있는 원소만 접근할 수 있다.
## deque 예시 코드
~~~cpp
#include <stack>
#include <iostream>
using namespace std;
int main() {
    stack<int> st; // default는 deque 사용
    st.push(1); // stack에 원소를 삽입
    st.pop(1); // stack에 원소를 삭제
    st.top(); // stack에 맨 위에 있는 원소를 출력(=vector에서의 back)
    st.empty(); // stack이 비어있는지 확인 True and False
    return 0;
}
~~~
## stack 예제
[BOJ10828](../BOJ10828.cpp)