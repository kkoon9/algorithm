Baekjoon 2133
=============
타일 채우기  <https://www.acmicpc.net/problem/2133>
---------------
- - -
### 다이나믹 프로그래밍
- - -

## 코드 설명
- i가 홀수일 때에는 0이다.
- i가 2의 배수일 때마다 3이 제곱된다.
- memo[i] = memo[i-2] * 3 + memo[i-4] * 2 + memo[i-6] * 2 + ...