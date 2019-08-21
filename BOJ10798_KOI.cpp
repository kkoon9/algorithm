#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int SIZE = 5;

int main() {
	vector <string> v(SIZE);
	int maxSz = 0;
	for (int i = 0;i < SIZE;i++) {
		cin >> v[i];
		int sz = v[i].size();
		if (sz > maxSz)
			maxSz = sz;
	}
	for (int i = 0;i < SIZE;i++) {
		v[i].resize(maxSz);
	}
	for (int i = 0;i < maxSz;i++) {
		for (int idx = 0;idx < SIZE;idx++) {
			if (v[idx][i] == ' ' || v[idx][i] == '\0')
				cout << "";
			else
				cout << v[idx][i];
		}
	}
	cout << endl;
}
