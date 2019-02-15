Baekjoon 10845
=============
큐  <https://www.acmicpc.net/problem/10845>
---------------
- - -
### 기본적인 큐 연산을 구현해보자.
- - -
## 변수 설명
- input : 어떤 연산을 할지 입력을 받는 string 변수
- q : STL의 queue으로 선언된 변수

## STL queue을 사용한 코드 설명
- STL의 queue에는 push, pop, size, empty, front, back의 연산들이 모두 들어있다.
- 메모리 1992 KB, 시간 328 ms

## STL queue을 사용하지 않고 배열로 구현한 코드 설명
- 미리 최대 명령 개수만큼 배열을 선언하여 큐을 만든다.
- 구조체(struct)를 사용하여 배열, 사이즈, 큐 내 첫 index(frontIndex), 마지막 index(backIndex) 그리고 생성자를 이용하여 연산을 함수로 구현한다.
- 메모리 1988 KB, 시간 348 ms

## 기억해야 할 것
- front나 back연산, pop 연산은 사용하기 전  queue가 비어있는지(empty) 확인한 후 사용해야 한다.
- 배열이나 벡터를 사용한 코드와 STL의 queue을 사용한 코드의 실행시간이 차이가 없음을 알 수 있다.
- queue에 push할 때 size index가 아닌 backIndex+1에 push 해줘야 한다.
