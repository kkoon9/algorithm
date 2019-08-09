#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	int r, e, c;

	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		cin >> r >> e >> c;
		e -= c;
		if (r < e)
			cout << "advertise" << endl;
		else if (r == e)
			cout << "does not matter" << endl;
		else
			cout << "do not advertise" << endl;
	}

	return 0;
}