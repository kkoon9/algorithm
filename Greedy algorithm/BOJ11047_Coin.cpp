#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int N, K;
	int count = 0;
	vector <int> Narr;

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		int bmp;
		cin >> bmp;
		Narr.push_back(bmp);
	}

	for (int i = N - 1; K > 0; i--) {
		while (K >= Narr[i]) {
			K -= Narr[i];
			count++;
		}
	}
	cout << count << endl;
	return 0;
}