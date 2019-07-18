Baekjoon 1967
=============
트리의 지름  <https://www.acmicpc.net/problem/1967>
---------------
- - -
### DFS
- - -
## 변수 설명
- dis : 각 정점에 이어진 정점들과 그 거리를 갖는 vector
- RtoNode : root에서 가장 먼 정점
- diameter : 지름
- check : 방문했는지 체크해주는 bool형 배열
- V : 정점의 개수 (input)
- v_num : 정점 번호 (input)
- a : v_num가 이어진 정점 (input)
- b : v_num과 a의 거리 (input)

## 함수 설명
- dfs : root에서 가장 먼 정점과 그 지름을 찾아주는 dfs 함수

## 코드 설명
- BOJ1167과 동일하므로 BOJ1167을 참고하자!
## 기억해야 할 것
- 지름 구하는 방법을 잘 익혀두자.
