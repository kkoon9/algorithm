#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
const long long MAX = 2000000000 + 1;

bool compare(int a, int b) {
	return abs(a) > abs(b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	ll result = MAX;
	pair<int, int> p;
	vector <long long> v;
	cin >> N;
	v.resize(N);
	for (int i = 0;i < N;i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(),compare);

	for (int i = 0;i < N - 1;i++) {
		if (abs(v[i] + v[i + 1]) < result) {
			result = abs(v[i] + v[i + 1]);
			p.first = v[i];
			p.second = v[i + 1];
		}
	}
	if (p.first > p.second)
		cout << p.second << ' ' << p.first << endl;
	
	else
		cout << p.first << ' ' << p.second << endl;

	return 0;
}