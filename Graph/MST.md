# MST, Minimum Spanning Tree
## SPanning Tree란?
- 그래프 내의 모든 정점을 포함하는 트리
- 최소 연결 부분 그래프  
    - 최소 연결 : 간선의 수가 가장 적다.
    - n개의 정점을 가지는 그래프의 최소 간선 수 : (n-1)개
## MST란?
- ST 중에서 사용된 간선들의 가중치 합이 최소인 트리
- 특징  
    - 간선의 가중치의 합이 최소여야 한다.
    - n개의 정점을 가지는 그래프에 대해 반드시 (n-1)개의 간선만을 사용해야 한다.
    - 사이클이 포함되서는 안 된다.
- MST를 찾아내는 기법
    1. 크루스칼 알고리즘(Kruskal's algorithm)
    2. 프림 알고리즘(Prim's algorithm)
- <a href>https://ratsgo.github.io/data%20structure&algorithm/2017/11/28/MST/</a>
