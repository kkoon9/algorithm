Baekjoon 1991
=============
트리 순회  <https://www.acmicpc.net/problem/1991>
---------------
- - -
### 트리 순회
- - -
## 변수 설명
- n : 노드 개수 (input)
- x : 루트 (input)
- y : 왼쪽 자식 (input)
- z : 오른쪽 자식 (input)

## 함수 설명
- preorder : 트리를 전위순회한다.
- inorder : 트리를 중위순회한다.
- postorder : 트리를 후위순회한다.
## 코드 설명
- n을 입력받는다.
- n번 x y z를 입력받아 y를 [x][0]열에 z를 [x][1]에 저장한다.
- '.'일 경우 -1를 넣어준다.
