DFS
==============
## DFS란?
- Depth First Search, 깊이 우선 탐색
- 스택을 이용해서 갈 수 있는 만큼 최대한 많이 가고
- 갈 수 없으면 이전 정점으로 돌아간다.
- DFS는 재귀 호출을 이용해서 구현할 수 있다.
~~~cpp
// 인접 행렬을 이용한 구현
int G[10][10];
void dfs(int x){
    check[x] = true;
    cout << x;
    for (int i=1; i<=n;i++){
        if(G[x][i] == 1 && check[i] == false)
            dfs(i);
    }
}
// 인접 리스트를 이용한 구현
vector <vector<int>> G(n+1);
void dfs(int x){
    check[x] = true;
    cout << x;
    int size = G[x].size();
    for (int i=0; i<size;i++){
        int y = G[x][i];
        if(check[y] == false){
            dfs(y);
        }
    }
}
~~~
