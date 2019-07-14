Baekjoon 1167
=============
트리의 지름  <https://www.acmicpc.net/problem/1167>
---------------
- - -
### dfs
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
- init : check를 모두 false로 바꿔주는 함수
## 풀이 방법
- V만큼 v_num을 입력받는다.
- a, b를 입력받는 동안 -1이 들어오면 break 시킨다.
- 입력이 끝나면 dfs(1,0)을 통해 RtoNode를 찾아준다.
- RtoNode를 찾으면 check를 초기화시킨 뒤 dfs(RtoNode,0)을 통해 트리의 지름을 찾아준 뒤 출력한다.
