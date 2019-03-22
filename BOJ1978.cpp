#include <iostream>
using namespace std;
int prime(int num) {
	if (num < 2)
		return 0;
	else {
		for (int i = 2; i*i <= num; i++)
			if (num % i == 0)
				return 0;
	}
	return 1;
}
int main() {
	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 0; i<N; i++) {
		int x;
		cin >> x;
		cnt += prime(x);
	}
	cout << cnt << '\n';
	return 0;
}