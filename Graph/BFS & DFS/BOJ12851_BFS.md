Baekjoon 12851
=============
숨바꼭질 2  <https://www.acmicpc.net/problem/12851>
---------------
- - -
### BFS
- - -
## 핵심
- visit을 두어 중복되는 경우를 제거해준다.
- queue를 사용하여 depth를 하나씩 들어가준다.
- 최단 시간에 도달하는 경우의 수도 알아야 하므로 visit 체크를 q에서 pop해줄 때 해준다.
