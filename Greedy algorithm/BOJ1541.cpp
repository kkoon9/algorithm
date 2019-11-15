/**
 * 문제 이름 : 잃어버린 괄호
 * 작성자 : kkoon9
 * 날짜 : 2019.11.15
 * 링크 : https://www.acmicpc.net/problem/1541
 * 결과가 최소가 되려면 - 뒤에 괄호를 넣어줘야 한다.
 * */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	vector<int> num;
	vector<int> sign;
	bool minus = false;
	int cur = 0;
	sign.push_back(1);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '+' || s[i] == '-') {
			if (s[i] == '+') {
				sign.push_back(1);
			}
			else {
				sign.push_back(-1);
			}
			num.push_back(cur);
			cur = 0;
		}
		else {
			cur = cur * 10 + (s[i] - '0');
		}
	}
	num.push_back(cur);
	int ans = 0;
	minus = false;
	for (int i = 0; i < num.size(); i++) {
		if (sign[i] == -1) {
			minus = true;
		}
		if (minus) {
			ans -= num[i];
		}
		else {
			ans += num[i];
		}
	}
	cout << ans << '\n';
	return 0;
}