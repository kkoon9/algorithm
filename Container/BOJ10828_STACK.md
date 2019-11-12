Baekjoon 10828
=============
스택  <https://www.acmicpc.net/problem/10828>
---------------
- - -
### 기본적인 스택 연산을 구현해보자.
- - -
## 변수 설명
- input : 어떤 연산을 할지 입력을 받는 string 변수
- st : STL의 stack으로 선언된 변수

## STL stack을 사용한 코드 설명
- STL의 stack에는 push, pop, size, empty, top의 연산들이 모두 들어있다.
- 메모리 1992 KB, 시간 332 ms

## STL stack을 사용하지 않고 vector로 구현한 코드 설명
- push : push_back, pop : pop_back, empty : empty, size : size, top : back 함수로 구현되어 있다.
- 메모리 1988 KB, 시간 332 ms

## STL stack을 사용하지 않고 배열로 구현한 코드 설명
- 미리 최대 명령 개수만큼 배열을 선언하여 스택을 만든다.
- 구조체(struct)를 사용하여 배열, 사이즈, 그리고 생성자를 이용하여 연산을 함수로 구현한다.
- 메모리 1988 KB, 시간 340 ms

## 기억해야 할 것
- top이나 pop 연산은 사용하기 전 stack이 비어있는지(empty) 확인한 후 사용해야 한다.
- 배열이나 벡터를 사용한 코드와 STL의 stack을 사용한 코드의 실행시간이 차이가 없음을 알 수 있다.
