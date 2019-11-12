#include <iostream>
using namespace std;
const int SIZE = 100 + 1;
bool res[SIZE]; // 정답
bool check[SIZE];
int cnt = 0;
int arr[SIZE];
bool flag = false;
void DFS(int idx, int i);
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	int maxIdx;
	cin >> N;
	for (int i = 1;i <= N;i++) {
		cin >> arr[i];
		if (arr[i] == i) {
			res[i] = true;
			cnt++;
		}
	}
	// arr, res print
	//for (int i = 1;i <= N;i++) {
	//	cout << "arr[" << i << "] : " << arr[i];
	//	cout << " res[" << i << "] : " << res[i] << endl;
	//}
	for (int i = 1;i <= N;i++) {
		if (res[i])
			continue;
		DFS(i, i);
		if (flag) {
			for (int j = 1;j <= N;j++) {
				if (check[j] && !res[j]) {
					res[j] = true;
					cnt++;
				}
				check[j] = false;
			}
		}
		else {
			for (int j = 0;j <= N;j++) 
				check[j] = false;
		}
		flag = false;
	}
	cout << cnt << endl;
	for (int i = 0;i <= N;i++) {
		if (res[i])
			cout << i << endl;
	}
	return 0;
}

void DFS(int idx, int i) {
	if (check[i] && idx == i) {
		flag = true;
		return;
	}
	if (res[i] || check[i]) {
		return;
	}
	check[i] = true;
	DFS(idx, arr[i]);
}