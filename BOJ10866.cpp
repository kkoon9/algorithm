#include <cstdio>
#include <string>
#include <deque>

using namespace std;

int main() {
	deque<int> dq;
	int n, m, i;
	char temp[1000];
	string str;

	scanf("%d", &n);

	for (i = 1; i <= n; ++i) {
		scanf(" %s", temp);
		str = temp;
		if (str == "push_front") {
			scanf(" %d", &m);
			dq.push_front(m);
		}
		else if (str == "push_back") {
			scanf(" %d", &m);
			dq.push_back(m);
		}
		else if (str == "pop_front") {
			printf("%d\n", dq.empty() ? -1 : dq.front());
			if (!dq.empty())
				dq.pop_front();
		}
		else if (str == "pop_back") {
			printf("%d\n", dq.empty() ? -1 : dq.back());
			if (!dq.empty())
				dq.pop_back();
		}
		else if (str == "size")
			printf("%d\n", dq.size());
		else if (str == "empty")
			printf("%d\n", dq.empty());
		else if (str == "front")
			printf("%d\n", dq.empty() ? -1 : dq.front());
		else
			printf("%d\n", dq.empty() ? -1 : dq.back());
	}

	return 0;
}