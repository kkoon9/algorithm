#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, x;
	cin >> N;
	int flag = 0;
	int score = 0;
	while (N--) {
		cin >> x;
		if (x == 1) {
			flag++;
			score += flag;
		}
		else
			flag = 0;
	}
	cout << score << endl;
	return 0;
}
