#include <iostream>
#include <queue>
using namespace std;


int main() {
	int N, M,count=1;
	cin >> N >> M;
	queue<int> q1;

	for (int i = 1; i <= N; i++) q1.push(i);
	cout << "<";
	while (q1.size() != 1) {
		if (count % M == 0) { //M번째일 때
			count = 1;
			cout << q1.front() << ", ";
			q1.pop();
		}
		else {
			count++;
			q1.push(q1.front());
			q1.pop();
		}
	}
	cout << q1.front() << ">";
	return 0;
}
