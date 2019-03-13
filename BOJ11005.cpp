#include <iostream>
#include <stack>
using namespace std;
int main() {
	long long N; // input
	int B; // base
	cin >> N >> B;
	stack <int> st;
	while (N > 0) {
		st.push(N%B);
		N /= B;
	}
	while (!st.empty()) {
		int x = st.top();
		st.pop();
		if (x >= 10) {
			x += 55;
			printf("%c", x);
		}
		else
			printf("%d", x);
	}
	cout << '\n';
	return 0;
}