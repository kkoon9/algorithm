Baekjoon 11724
=============
연결 요소의 개수 <https://www.acmicpc.net/problem/11724>
---------------
### 연결 요소의 개수를 구할 때에는 dfs, bfs를 사용하자.
- - -
## 변수 설명
- a : 인접 리스트를 가지는 벡터
- check : 방문한 노드면 true를 가진다.
- result : 연결 요소의 개수

## 코드 설명
- check 배열이 모두 true가 될 때까지 반복문을 실행한다.
- dfs를 빠져나올 때 = 연결 요소를 1개 찾았을 때
- dfs를 빠져나오면 result++ 해준다.
## 기억해야 할 것
- 여러 문제를 접하면서 dfs에 익숙해져보자.
