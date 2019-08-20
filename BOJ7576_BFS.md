Baekjoon 7576
=============
토마토  <https://www.acmicpc.net/problem/7576>
---------------
- - -
### BFS
- - -
## 함수 설명
- init : 창고를 둘러싸는 인덱스에 -1를 넣어주는 함수
## 코드 설명
1. 입력이 1인 배열 인덱스를 큐에 넣어줘야 한다.
    - 하루에 동서남북으로 익은 토마토로 퍼져나가기 때문
2. 익은 토마토의 개수와 전체 토마토의 개수를 구해줘야 한다.
    - BFS가 끝났을 때 서로 개수가 같아야 모두 익은 것이기 때문
3. Day 세는 법
    - 동서남북 모두 토마토가 익어 있으면 oneCheck++
    - queue의 개수와 oneCheck가 같다면 day를 추가하지 않는다.
    - why? 모두 익은 토마토이므로 BFS만 작동해야 한다.