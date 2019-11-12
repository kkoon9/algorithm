#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100300;
int test = MAX;
bool visit[MAX];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, K;
	int depth = 0;
	int cnt = 0;
	bool flag = false;
	cin >> N >> K;
	queue <int> q;
	q.push(N);
	visit[N] = true;

	while (!q.empty()) {
		int size = q.size();
		for (int i = 0;i < size;i++) {
			int v = q.front();
			q.pop();
			visit[v] = true;
			if (depth > test) {
				queue <int> empty;
				q = empty;
				break;
			}
			if (v == K) {
				cnt++;
				if (test > depth)
					test = depth;
			}
			else {
				if (v - 1 >= 0 && !visit[v - 1]) {
					q.push(v - 1);
				}
				if (v + 1 <= MAX && !visit[v + 1]) {
					q.push(v + 1);
				}
				if (v * 2 <= MAX && !visit[v * 2]) {
					q.push(v * 2);
				}
			}
		}
		depth++;
	}
	cout << test << endl << cnt << endl;
	return 0;
}
