Baekjoon 9012
=============
괄호  <https://www.acmicpc.net/problem/9012>
---------------
- - -
### STL의 stack을 사용하여 풀자.
- - -
## 변수 설명
- input : 입력값을 저장하기 위한 string
- st : input을 넣기 위한 char 자료형 스택
- flag : YES(true) or NO(false)를 출력하기 위한 bool 변수 (초기값 : true)

- - -
## 코드 설명
- input을 받아 size를 구한 뒤 반복문을 돌려준다.
- '(' 면 push를 해준다.
- ')' 면 먼저 스택이 비어있는지 확인한다.  
(1). 스택이 비어있다면 flag를 false로 바꿔준 뒤 반복문을 break시킨다.  
(2). 스택이 비어있지 않다면 pop을 해준다.
- 반복문이 종료되면 스택이 비어있지 않으면 flag를 false로 바꿔준다.
- flag가 true면 YES를 false면 NO를 출력해준다.

## 기억해야 할 것
- pop하기 전에 empty 확인을 꼭 하자!
