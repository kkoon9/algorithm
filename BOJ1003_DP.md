Baekjoon 1003
=============
피보나치 함수  <https://www.acmicpc.net/problem/1003>
---------------
- - -
### 다이나믹 프로그래밍
- - -
## 함수 설명
- dp : DP가 수행되는 함수
- print : Testcase만큼 입력받아서 index의 값을 출력해주는 함수

## 풀이 방법
- 출력값이 0과 1의 출력 횟수이므로 구조체를 사용한다.
- index가 i일 때 0과 1의 출력 횟수는 memo[i-2] + memo[i]이다.
- testcase만큼 입력을 받아서 출력해준다.
