#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
const long long MAX = 2000000000 + 1;
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
	for (int i = 0;i < N;i++)
		cin >> v[i];

	sort(v.begin(), v.end());
	for (int i = 0;i < N ;i++) {
		ll bmp;
		for (int j = i + 1;j < N;j++) {
			bmp = v[i] + v[j];
			cout << result << endl;
			if (std::abs(result) > std::abs(bmp)) {
				result = bmp;
				p.first = v[i];
				p.second = v[j];
			}
		}
	}
	if (p.first > p.second)
		cout << p.second << ' ' << p.first << endl;
	
	else
		cout << p.first << ' ' << p.second << endl;

	return 0;
}