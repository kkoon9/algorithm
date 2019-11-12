Samsung Expert Academy 2814
=============
최장 경로 <https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV7GOPPaAeMDFAXB>
---------------
- - -
### dfs로 풀어보자.
- - -
## 변수 설명
- map : 각 정점의 이어진 정점은 TRUE인 bool 배열
- visited : 방문한 정점을 비트를 통해 표시
- cnt : 한 정점에서 다른 정점까지 사이에 있는 간선의 개수
- res : 총 cnt에서의 최대값을 가지는 cnt

## 함수 설명
- dfs : 각 정점이 다른 정점 사이에 간선이 얼마나 있는지 알아내기 위한 함수

## 코드 설명
- (1 << v) : 비트를 v 이동하는 것이다.  
ex) 1 << 5 : 32(2의 5제곱)  
비트를 이동시키고 visit와 OR를 해주는 이유는 방문한 정점을 표시해주기 위함이다.
- map을 통해 이어져 있는 정점인지 확인하고 visited를 통해 방문했던 노드인지 확인한다.

## 기억해야 할 것
- visited를 사용했던 것처럼 비트이동을 통해 방문을 표시하는 것은 새로웠다. 다른 문제에서 꼭 사용해보자.
