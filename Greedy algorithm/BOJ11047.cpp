/**
 * 문제 이름 : 동전 0
 * 작성자 : kkoon9
 * 날짜 : 2019.11.15
 * 링크 : https://www.acmicpc.net/problem/11047
 *  greedy algorithm 기본 문제
 * */
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int N, K;
	int count = 0;

	cin >> N >> K;
	vector <int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	for (int i = N - 1; i>=0; i--) {
		count += K/a[i];
		k %= a[i];
	}
	cout << count << endl;
	return 0;
}