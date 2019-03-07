#include <iostream>
using namespace std;
long long memo[101][10];
long long mod = 1000000000;
int main() {
    int n;
    cin >> n;
    for (int i=1; i<=9; i++)
        memo[1][i] = 1;
    for (int i=2; i<=n; i++) {
        for (int j=0; j<=9; j++) {
            memo[i][j] = 0;
            if (j != 0) 
                memo[i][j] += memo[i-1][j-1];
            if (j != 9) 
                memo[i][j] += memo[i-1][j+1];
            memo[i][j] %= mod;
        }
    }
    long long result = 0;
    for (int i=0; i<=9; i++)
        result += memo[n][i];
    result %= mod;
    cout << result << '\n';
    return 0;
}