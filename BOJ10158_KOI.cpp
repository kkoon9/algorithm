#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int w, h;
	int p, q;
	int t;
	cin >> w >> h;
	cin >> p >> q;
	cin >> t;
	cout << w - abs(w - (p + t) % (2 * w)) << ' ' << h - abs(h - (q + t) % (2 * h)) << endl;

}