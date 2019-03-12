#include <iostream>
#include <string>
using namespace std;
int memo[5001];
int mod = 1000000;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    s = " " + s;
    memo[0] = 1;
    for (int i=1; i<=n; i++) {
        int x = s[i] - '0';
        if (1 <= x && x <= 9) {
            memo[i] += memo[i-1];
            memo[i] %= mod;
        }
        if (i==1) {
            continue;
        }
        if (s[i-1] == '0') {
            continue;
        }
        x = (s[i-1]-'0')*10 + (s[i]-'0');
        if (10 <= x && x <= 26) {
            memo[i] += memo[i-2];
            memo[i] %= mod;
        }
    }
    cout << memo[n] << '\n';
    return 0;
}