Baekjoon 7571
=============
점 모으기  <https://www.acmicpc.net/problem/7571>
---------------
- - -
### 중간값
- - -
## 문제 설명
- 첫 줄에는 격자공간의 크기와 점들의 개수를 나타내는 두 정수 N과 M이 하나의 공백을 사이에 두고 주어진다. 
- 다음의 M줄에는 각 줄마다 격자공간내의 점의 위치를 나타내는 두 개의 정수가 하나의 공백을 사이에 두고 주어진다.
- 단, N의 크기는 1이상 10,000이하이고, M의 크기는 1이상 100,000이하이다.
- 모든 점들을 하나의 사각형으로 모을 때 드는 이동거리의 합의 최솟값을 출력해야 한다.
## 코드 설명
- 어디 사각형에 모을지가 중요하다.
- M개의 위치중에서 중간이 되는 곳들의 중간이 되는 점을 찾아야 한다.
    1. M개의 위치 x, y의 정렬시켜 index가 M/2이 중간값이다.
    2. 이 중간값과 M개의 좌표의 거리를 더해주면 된다.
    