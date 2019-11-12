Baekjoon 2583
=============
영역 구하기  <https://www.acmicpc.net/problem/2583>
---------------
- - -
### DFS
- - -
## 함수 설명
- dfs : dfs를 구현한 함수
- print : area 배열을 모두 출력하는 함수
- input : K만큼의 x,y좌표값을 입력받는 함수
- edgeInit ; area 테두리를 1로 초기화해주는 함수
- output : 결과를 출력해주는 함수

## 풀이 방법
- 테두리와 input의 범위들을 1로 초기화해준다.
- area[x][y]가 0이면 n++ 해주고 dfs를 시작한다.
- 방문했던 index를 1로 초기화해주고 넓이를 구해주기 위해 cnt++해준다.
- dfs가 모두 끝나면 extent 벡터에 cnt를 넣어주고 cnt를 초기화해준다.
