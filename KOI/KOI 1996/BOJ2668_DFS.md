Baekjoon 2668
=============
숫자고르기  <https://www.acmicpc.net/problem/2668>
---------------
- - -
### DFS
- - -
## 함수 설명
- DFS : 시작(root)로 다시 돌아오면 flag를 true로 바꿔주는 함수

## 풀이 방법
- 입력 받을 때 index와 그 값이 같으면 res배열을 true로 바꿔준다.
- DFS함수에서 flag가 true면 그 경로(check 함수) 모두를 res 배열 true로 바꿔준다.
- 마지막으로 res 배열에 true인 값을 모두 출력해준다.
