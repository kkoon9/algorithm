#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100300;
bool visit[MAX];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, K;
	int depth = 0;
	cin >> N >> K;
	if (N == K) {
		cout << "0\n";
	}
	else {
		queue <int> q;
		q.push(N);
		visit[N] = true;

		while (!q.empty()) {
			int size = q.size();
			for (int i = 0;i < size;i++) {
				int v = q.front();
				q.pop();

				if (v == K) {
					cout << depth << endl;
					break;
				}
				if (v - 1 >= 0 && !visit[v - 1]) {
					q.push(v - 1);
					visit[v - 1] = true;
				}
				if (v + 1 <= MAX && !visit[v + 1]) {
					q.push(v + 1);
					visit[v + 1] = true;
				}
				if (v * 2 <= MAX && !visit[v * 2]) {
					q.push(v * 2);
					visit[v * 2] = true;
				}
			}
			depth++;
		}
	}

	return 0;
}
