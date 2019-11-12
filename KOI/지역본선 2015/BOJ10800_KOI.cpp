#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct Ball{
	int index;
	int sz;
	int color;
	int count = 0;
}ball;
const int SIZE = 200000 + 1;

bool cmpSz(const ball& a, const ball& b);
bool cmpIdx(const ball& a, const ball& b);
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	int sum = 0;
	vector <ball> v;
	vector <int> colorSum;
	cin >> N;
	v.resize(N);
	colorSum.resize(N + 1);
	for (int i = 0;i < N;i++) {
		v[i].index = i;
		cin >> v[i].color >> v[i].sz;
	}
	sort(v.begin(), v.end(), cmpSz);
	
	for (int i = 0, j = 0; i < N;i++) {
		for (;v[i].sz > v[j].sz; j++) {
			sum += v[j].sz;
			colorSum[v[j].color] += v[j].sz;
		}
		v[i].count = sum - colorSum[v[i].color];
	}
	sort(v.begin(), v.end(), cmpIdx);
	for (int i = 0;i < N;i++)
		cout << v[i].count << '\n';
	return 0;
}

bool cmpSz(const ball& a, const ball& b) {
	return a.sz < b.sz;
}
bool cmpIdx(const ball& a, const ball& b) {
	return a.index < b.index;
}
