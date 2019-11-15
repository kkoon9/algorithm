/**
 * 문제 이름 : ATM
 * 작성자 : kkoon9
 * 날짜 : 2019.11.15
 * 링크 : https://www.acmicpc.net/problem/11399
 *  greedy algorithm 기본 문제
 * */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int N;
	int sum = 0;

	cin >> N;
	vector <int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++) {
		sum += (v[i] * (N - i));
	}
	cout << sum << endl;
	return 0;
}