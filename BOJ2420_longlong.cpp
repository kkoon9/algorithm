#include <iostream>
using namespace std;
typedef long long ll;

ll sum(ll N, ll M);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll N, M, result;
	cin >> N >> M;
	result = sum(N, M);
	cout << result << endl;
	return 0;
	
}
ll sum(ll N, ll M) {
	ll result;
	N -= M;
	if (N < 0)
		N = -N;
	return N;
}