#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long K, N, M;
	cin >> K >> N >> M;
	K *= N;
	if (K > M) {
		cout << K - M << endl;
	}
	else {
		cout << "0" << endl;
	}
	return 0;
}