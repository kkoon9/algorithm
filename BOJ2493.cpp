// 첫번째 접근 : 시간초과 및 오답
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N; // N <= 500,000
	int laser_bf = 0; // 전 index가 쏘고 있는 laser index
	int index_bf = 0; // 전 index의 값
	int index_bf_val = 0; // 전 index가 갖는 값
	int index_ps_val; // 현재 index의 값 (input)
	for (int i = 1; i <= N; i++) {
		cin >> index_ps_val;
		if (index_ps_val < index_bf_val)
			laser_bf = index_bf;
		index_bf = i;
		index_bf_val = index_ps_val;
		cout << laser_bf << " ";
	}
	return 0;
}

// 두번째 접근
#include <iostream>
#include <stack>
using namespace std;
stack <pair<int,int>> st;
int main() {
	int N;
	cin >> N; // N <= 500,000
	int index_ps_val; // 현재 index의 값 (input)
	for (int i = 1; i <= N; i++) {
		scanf("%d", &index_ps_val);

		while (!st.empty()) {
			if (index_ps_val < st.top().first) {
				printf("%d ",st.top().second);
				break;
			}
			else
				st.pop();
		}
		if (st.empty())
			printf("0 ");
		st.push(make_pair(index_ps_val, i));
	}
	return 0;
}
