#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, K;
	int count = 0;
	cin >> N >> K;
	for (int i = N;i > 0;i--) {
		if (N % i == 0) {
			count++;
			if (count == K) {
				cout << N/i << endl;
				break;
			}
		}
	}
	if (count != K)
		cout << "0" << endl;
	return 0;
}