#include <iostream>
#include <queue>
using namespace std;
void print(queue<int> q, int M);

int main() {
	int N, M;
	cin >> N >> M;
	queue<int> q1;
	for (int i = 1; i <= N; i++) q1.push(i);
	print(q1, M);
	return 0;
} 

void print(queue<int> q, int M) {
	int count = 1;
	cout << "<";
	while (q.size() != 1) {
		if (count % M == 0) { //M번째일 때
			count = 1;
			cout << q.front() << ", ";
			q.pop();
		}
		else {
			count++;
			q.push(q.front());
			q.pop();
		}
	}
	cout << q.front() << ">";
}