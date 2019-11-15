/**
 * 문제 이름 : 30
 * 작성자 : kkoon9
 * 날짜 : 2019.11.15
 * 링크 : https://www.acmicpc.net/problem/10610
 * 30의 배수가 되려면 2, 3, 5 나누어떨어져야 한다.
 * 2 : 마지막 숫자가 짝수
 * 3 : 수의 모든 숫자의 합이 3으로 나누어 떨어져야한다.
 * 5 : 마지막 숫자가 5 또는 0
 * 따라서, 마지막 숫자가 0이고 모든 숫자의 합이 3으로 나누어 떨어져야한다.
 * */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	int sum = 0;
	for (char c : s) {
		sum += c - '0';
	}
	sort(s.begin(), s.end());
	if (s[0] == '0' && sum % 3 == 0) {
		reverse(s.begin(), s.end());
		cout << s << '\n';
	}
	else {
		cout << "-1\n";
	}
	return 0;
}