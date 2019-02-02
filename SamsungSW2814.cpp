#include <stdio.h>
#include <memory.h>
 
int T, n, m, res;
bool map[11][11]; // 각 정점의 이어진 정점
unsigned short visited; // 정점과 이어진 정점이 있는지 체크
 
void dfs(int v,int cnt) {
    visited |= (1 << v);
    printf("%d ", 1<<v);
    for (int i = 1; i <= n; i++) {
        if (map[v][i] && !(visited&(1<<i))) {
            dfs(i,cnt + 1);
        }
    }
    if (cnt > res) res = cnt;
}
 
int main(){
    scanf("%d", &T);
    for (int test_case = 1; test_case <= T; test_case++) {
        memset(map, 0, sizeof(map)); //초기화
        scanf("%d %d", &n, &m);
 
        res = 0;
        visited = 0;
 
        while (m--) {
            int x, y;
            scanf("%d %d", &x, &y);
            map[x][y]=1;
            map[y][x]=1;
        }
 
        for (int i = 1; i <= n; i++) {
            if (!(visited&(1 << i))) {
                dfs(i, 1);
            }
        }
        printf("#%d %d\n", test_case, res);
    }
}