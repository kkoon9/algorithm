#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector <string> v;
	for (int i = 0;i < N;i++) {
		string str;
		cin >> str;
		int half = M / 2;
		for (int i = 0;i < half;i++) {
			char bmp = str[i];
			str[i] = str[M - i - 1];
			str[M - i - 1] = bmp;
		}
		v.push_back(str);
	}
	for(int i=0;i<N;i++)
		cout << v[i] << endl;
	return 0;
}