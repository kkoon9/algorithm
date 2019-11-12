Baekjoon 2589
=============
보물섬  <https://www.acmicpc.net/problem/2589>
---------------
- - -
### BFS
- - -
## 함수 설명
- bfs : depth를 리턴하는 함수
## 코드 설명
- 좌표 (x,y)를 다음과 같은 조건을 만족하는지 체크해준다.
    1. arr 범위 밖이라면 continue
    2. 방문했던 좌표라면 continue
    3. 'W'라면 continue
- 세 가지 조건을 다 피했다면 queue에 넣어준 뒤 방문했다는 표시를 해준다.
