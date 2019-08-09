#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int COUNT = 10;
int main() {
	int w = 0, k = 0;
	vector <int> W(COUNT), K(COUNT);
	for (int i = 0;i < COUNT;i++)
		cin >> W[i];
	for (int i = 0;i < COUNT;i++)
		cin >> K[i];
	sort(W.begin(), W.end());
	sort(K.begin(), K.end());
	w = W[9] + W[8] + W[7];
	k = K[9] + K[8] + K[7];
	cout << w << ' ' << k << endl;
	return 0;
}
