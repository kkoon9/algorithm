Baekjoon 1260
=============
DFS와 BFS  <https://www.acmicpc.net/problem/1260>
---------------
### DFS BFS
- - -
## 함수 설명
- init : check를 모두 false로 바꿔주는 함수
- dfs : start 노드를 매개변수로 갖고 dfs를 구현한 함수
- bfs : start 노드를 매개변수로 갖고 bfs를 구현한 함수

## 풀이 방법
1. dfs
- check[node]를 true로 하고 출력해준다.
- 그런 다음 node와 연결된 노드들 중 아직 탐색 안된 노드를 찾아서 dfs 함수를 재귀호출해준다.
2. bfs
- check[node]를 true로 하고 queue에 넣어준다.
- 큐가 빌 때까지 반복문을 해주는데 q.front()를 출력해주고 pop해준다.
- 그런 다음 node와 연결된 노드들 중 아직 탐색 안된 노드를 찾아서 queue에 모두 넣어준다.
