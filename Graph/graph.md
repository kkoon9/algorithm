Graph
==============
## 그래프란?
- 정점(Node, Vertex)과 간선(Edge)을 하나로 모아 놓은 자료구조이다.
- 연결되어 있는 객체 간의 관계를 표현할 수 있는 자료구조이다.
- 그래프는 여러 개의 고립된 부분 그래프로 구성될 수 있다.
## 용어
### 1. 경로 
- 정점 A에서 B로 가는 경로
### 2. 사이클 
- 정점 A에서 다시 A로 돌아오는 경로
### 3. 단순 경로/사이클 
- 같은 정점을 두 번 이상 방문하지 않는 경로/사이클
- 특별한 말이 없으면, 일반적으로 단순 경로/사이클로 인지하면 된다.
### 4. 방향
- 방향 있는 그래프 : A --> C 와 같이 간선에 방향이 있다.  
A --> C가 있다고 C --> A 경로도 있는 것은 아니다.
- 방향 없는(양방향) 그래프 : A -- C 와 같이 간선에 방향이 없다.  
A -- C면 A --> C와 C --> A 모두 가능하다.
### 5. 간선
- 간선이 여러 개일 수 있다.

### 6. 루프
- 간선의 양 끝 점이 같은 경우가 있다.
- A --> A

### 7. 가중치
- 이동하는 거리, 시간, 비용 등을 의미한다.
- 가중치가 없는 경우에는 1이라고 생각하면 된다.

### 8. 차수
- 정점과 연결되어 있는 간선의 개수

## 그래프의 표현
![RPC를 사용한 요청과 응답](https://github.com/kkoon9/algorithm/blob/master/img/무방향그래프.PNG)
- 정점이 6개, 간선이 8개
- 정점 : {1,2,3,4,5,6}
- 간선 : { (1,2), (1,5),(2,5),(2,3),(3,4),(2,4),(4,5),(4,6)}

## 문제풀이 방법
### 가중치가 없는 인접 행렬
- 정점의 개수를 V이라고 했을 때 V x V크기의 2차원 배열을 이용한다.
- G[i][j] = 1(i -> j 간선이 있다.) 0 (없다.)
~~~cpp
#include <iostream>
using namespace std;
int G[10][10];
int main() {
    int n,m; // n : 정점의 개수, m : 간선의 개수
    cin >> n >> m;
    for(int i=0; i<m;i++){
        int u,v;
        cin >> u >> v;
        G[u][v] = G[v][u] = 1;
    }
}
~~~
### 가중치가 있는 인접 행렬
- 정점의 개수를 V이라고 했을 때 V x V 크기의 2차원 배열을 이용한다.
- G[i][j] = w(i -> j 간선이 있다.) 0 (없다.)
~~~cpp
#include <iostream>
using namespace std;
int G[10][10];
int main() {
    int n,m; // n : 정점의 개수, m : 간선의 개수
    cin >> n >> m;
    for(int i=0; i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        G[u][v] = G[v][u] = w;
    }
}
~~~
### 가중치가 없는 인접 리스트
- 링크드 리스트를 이용하여 구현한다.
- G[i] = i와 연결된 정점을 링크드 리스트로 포함하고 있다.
- vector와 같이 가변적인 길이를 갖는 배열을 이용한다.
~~~cpp
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m; // n : 정점의 개수, m : 간선의 개수
    cin >> n >> m;
    vector <vector<int>> G(n+1);
    for(int i=0; i<m;i++){
        int u,v;
        cin >> u >> v;
        G[u].push_bacK(v); 
        G[v].push_back(u);
    }
}
~~~
### 가중치가 있는 인접 리스트
- 링크드 리스트를 이용하여 구현한다.
- G[i] = i와 연결된 정점과 그 간선의 가중치를 포함하는 링크드 리스트로 포함하고 있다.
- vector와 같이 가변적인 길이를 갖는 배열을 이용한다.
~~~cpp
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m; // n : 정점의 개수, m : 간선의 개수
    cin >> n >> m;
    vector <pair<int, int>> G(n+1);
    for(int i=0; i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        G[u].push_bacK(make_pair(v,w)); 
        G[v].push_back(make_pair(u,w));
    }
}
~~~
### 인접 행렬/리스트의 공간 복잡도
- 인접 행렬 : O(V^2), V는 노드의 개수
- 인접 리스트 : O(E), E는 간선의 개수

## DFS와 BFS 문제
![DFS와 BFS](https://github.com/kkoon9/algorithm/blob/master/BOJ1260.md)
