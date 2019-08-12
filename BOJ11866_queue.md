Baekjoon 11866
=============
조세퍼스 문제 0 <https://www.acmicpc.net/problem/11866>
---------------
### queue
- - -
## 함수 설명
- print : queue에 들어있는 값을 출력하는 함수

## 풀이 방법
- 1 ~ N 까지 queue에 넣어준다.
- count가 M이 될 때까지 queue의 front를 맨 뒤로 보내준다. (push 후 pop)
- count가 M이 되면 queue의 front를 출력해준다.
- queue의 size가 1이 될 때까지 반복한다.
- 마지막 남은 원소를 출력해준 뒤 종료한다.

## 주의사항
- 처음에 1~N만큼 queue에 넣어주는 init(q,N)함수를 만들었다.
- 하지만 배열과는 다르게 q는 들어가지 않았다.
