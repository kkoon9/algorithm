#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;

ll init(vector<ll>& a, vector<ll>& tree, int node, int start, int end);
void update(vector<ll>& tree, int node, int start, int end, int index, ll diff);
ll sum(vector<ll>& tree, int node, int start, int end, int left, int right);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, k;
	/*
	n : 수의 개수
	m : 변경이 일어나는 횟수
	k : 구간의 합을 구하는 횟수
	*/
	cin >> n >> m >> k;
	vector<ll> a(n);
	int h = (int)ceil(log2(n));
	int tree_size = (1 << (h + 1));
	vector<ll> tree(tree_size);
	m += k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	init(a, tree, 1, 0, n - 1);
	while (m--) {
		int t1, t2, t3;
		cin >> t1; // 1이면 변경, 2이면 구간 합
		if (t1 == 1) {
			int t2;
			ll t3;
			cin >> t2 >> t3; //t2 , t3 : index
			t2 -= 1;
			ll diff = t3 - a[t2];
			a[t2] = t3;
			update(tree, 1, 0, n - 1, t2, diff);
		}
		else if (t1 == 2) {
			int t2, t3;
			cin >> t2 >> t3;
			printf("%lld\n", sum(tree, 1, 0, n - 1, t2 - 1, t3 - 1));
		}
	}
	return 0;
}

ll init(vector<ll>& a, vector<ll>& tree, int node, int start, int end) {
	if (start == end)
		return tree[node] = a[start];
	
	else 
		return tree[node] = init(a, tree, node * 2, start, (start + end) / 2) + init(a, tree, node * 2 + 1, (start + end) / 2 + 1, end);
	
}
void update(vector<ll>& tree, int node, int start, int end, int index, ll diff) {
	if (index < start || index > end) return;
	tree[node] = tree[node] + diff;
	if (start != end) {
		update(tree, node * 2, start, (start + end) / 2, index, diff);
		update(tree, node * 2 + 1, (start + end) / 2 + 1, end, index, diff);
	}
}
ll sum(vector<ll>& tree, int node, int start, int end, int left, int right) {
	if (left > end || right < start) {
		return 0;
	}
	if (left <= start && end <= right) {
		return tree[node];
	}
	return sum(tree, node * 2, start, (start + end) / 2, left, right) + sum(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
}