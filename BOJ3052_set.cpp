#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

const int MOD = 42;
const int COUNT = 10;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	set <int> st;
	int x;
	for (int i = 0;i < COUNT;i++) {
		cin >> x;
		st.insert(x % MOD);
	}
	cout << st.size() << endl;
	return 0;
}