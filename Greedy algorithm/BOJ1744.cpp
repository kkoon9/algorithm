/**
 * 문제 이름 : 수 묶기
 * 작성자 : kkoon9
 * 날짜 : 2019.11.15
 * 링크 : https://www.acmicpc.net/problem/1744
 * 양수는 큰 수끼리
 * 음수는 작은 수끼리(절대값이 큰 값)
 * 1과 0은 묶지 않고 카운팅만 해준다.
 * 음수의 개수가 홀수이면 0과 묶어준다.
 * */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<int> plus;
    vector<int> minus;
    cin >> n;
    int zero = 0;
    int one = 0;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            one += 1;
        } else if (x > 0) {
            plus.push_back(x);
        } else if (x < 0) {
            minus.push_back(x);
        } else {
            zero += 1;
        }
    }
    sort(plus.begin(), plus.end());
    reverse(plus.begin(), plus.end());
    sort(minus.begin(), minus.end());
    if (plus.size()%2 == 1) {
        plus.push_back(1);
    }
    if (minus.size()%2 == 1) {
        minus.push_back(zero > 0 ? 0 : 1);
    }
    int ans = one;
    for (int i=0; i<plus.size(); i+=2) {
        ans += plus[i] * plus[i+1];
    }
    for (int i=0; i<minus.size(); i+=2) {
        ans += minus[i] * minus[i+1];
    }
    cout << ans << '\n';
    return 0;
}