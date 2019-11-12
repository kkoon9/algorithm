#include <bits/stdc++.h>
 
const long long r = 1000000009;
const int MAX = 1000001;
long long d[MAX][7];
 
int main() {
    long long n, k, ans = 0;
 
    scanf("%lld %lld", &n, &k);
 
    d[1][3] = 1;
    d[1][6] = k - 1;
 
    for (int i = 2;i <= n;++i) {
        d[i][0] = d[i - 1][1];
        d[i][1] = d[i - 1][2];
        d[i][2] = d[i - 1][3];
        d[i][3] = (d[i - 1][0] + d[i - 1][1] + d[i - 1][3] + d[i - 1][5] + d[i - 1][6]) % r;
        d[i][4] = d[i - 1][5];
        d[i][5] = (d[i - 1][2] + d[i - 1][4]) % r;
        d[i][6] = ((k - 1) * d[i - 1][6] + (k - 2) * (d[i - 1][0] + d[i - 1][1] + d[i - 1][2] + d[i - 1][3] + d[i - 1][4] + d[i - 1][5])) % r;
    }
 
    for (int i = 0;i < 7;++i)
        ans = (ans + d[n][i]) % r;
 
    printf("%lld", ans);
 
    return 0;
}