#include <iostream>
using namespace std;

const int SIZE = 6 + 1;
#define SIX 6
#define FIVE 5
#define FOUR 4
#define THREE 3
#define TWO 2
#define ONE 1

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int ans = 0;
	int arr[SIZE];
	for (int i = 1;i < SIZE;i++)
		cin >> arr[i];
	ans += arr[SIX];
	while (arr[FIVE] > 0) {
		arr[FIVE]--;
		arr[ONE] -= 11;
		if (arr[ONE] <= 0) arr[ONE] = 0;
		ans++;
	}
	while (arr[FOUR] > 0) {
		arr[FOUR]--;
		if (arr[TWO] >= 5)
			arr[TWO] -= 5;
		else {
			arr[ONE] -= (5 - arr[TWO]) * 4;
			if (arr[ONE] < 0)
				arr[ONE] = 0;
			arr[TWO] = 0;
		}
		ans++;
	}
	while (arr[THREE] > 0) {
		if (arr[THREE] >= 4) {
			ans += arr[THREE] / 4;
			arr[THREE] %= 4;
			continue;
		}
		else if (arr[THREE] == 3) {
			arr[THREE] = 0;
			if (arr[TWO] >= 1) {
				arr[TWO]--;
				arr[ONE] -= 5;
			}
			else
				arr[ONE] -= 9;
			if (arr[ONE] < 0)
				arr[ONE] = 0;
		}
		else if (arr[THREE] == 2) {
			arr[THREE] = 0;
			if (arr[TWO] >= 3) {
				arr[TWO] -= 3;
				arr[ONE] -= 6;
			}
			else if (arr[TWO] == 2) {
				arr[TWO] = 0;
				arr[ONE] -= 10;
			}
			else if (arr[TWO] == 1) {
				arr[TWO] = 0;
				arr[ONE] -= 14;
			}
			else
				arr[ONE] -= 18;
			if (arr[ONE] < 0)
				arr[ONE] = 0;
		}
		else {
			arr[THREE] = 0;
			if (arr[TWO] >= 5) {
				arr[TWO] -= 5;
				arr[ONE] -= 7;
			}
			else {
				arr[ONE] -= 7 + (5 - arr[TWO]) * 4;
				arr[TWO] = 0;
			}
			if (arr[ONE] < 0) arr[ONE] = 0;
		}
		ans++;
	}
	int val = arr[TWO] * 4 + arr[ONE];
	if (val % 36 == 0)
		ans += val / 36;
	else
		ans += val / 36 + 1;
	cout << ans << endl;
	return 0;
}
