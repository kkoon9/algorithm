#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int N, K;
	int first = 1;
	int ans, end;
	cin >> N >> K;
	end = K;
	while (first <= end) {
		long long cnt = 0;
		int mid = (first + end) / 2;
		for (int i = 1; i <= N; i++) cnt += min(mid / i, N);
		if (cnt < K) first = mid + 1;
		else ans = mid, end = mid - 1;
	}
	printf("%d", ans);

	return 0;
}