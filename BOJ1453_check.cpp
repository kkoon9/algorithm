#include <iostream>
using namespace std;

const int MAX = 100 + 1;
bool check[MAX];
int main() {
	int N, x;
	int count = 0;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> x;
		if (check[x])
			count++;
		check[x] = true;
	}
	cout << count << endl;
	return 0;
}