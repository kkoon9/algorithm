#include <iostream>
#include <string>
using namespace std;
const int SIZE = 10 + 1;
int arr[SIZE];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x;
	int sum = 0;
	for (int i = 0;i < 5;i++) {
		cin >> x;
		sum += x;
		arr[x / 10]++;
	}
	cout << sum / 5 << endl;
	for (int i = 1,cnt = 0;i < SIZE;i++) {
		while (arr[i] != 0) {
			cnt++;
			arr[i]--;
			if (cnt == 3)
				break;
		}
		if (cnt == 3) {
			cout << i * 10;
			break;
		}		
	}
	return 0;
}