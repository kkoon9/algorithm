// STL deque으로 구현한 소스코드
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	int N, x;
	cin >> N;
	deque<int> dq;
	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == "push_front") {
			cin >> x;
			dq.push_front(x);
		}
		else if (input == "push_back") {
			cin >> x;
			dq.push_back(x);
		}
		else if (input == "pop_front") {
			if (dq.empty())
				cout << "-1";
			else {
				cout << dq.front();
				dq.pop_front();
			}
			cout << '\n';
		}
		else if (input == "pop_back") {
			if (dq.empty())
				cout << "-1";
			else {
				cout << dq.back();
				dq.pop_back();
			}
			cout << '\n';
		}
		else if (input == "size") {
			cout << dq.size() << '\n';
		}
		else if (input == "empty") {
			if (dq.empty())
				cout << "1";
			else
				cout << "0";
			cout << '\n';
		}
		else if (input == "front") {
			if (dq.empty())
				cout << "-1";
			else
				cout << dq.front();
			cout << '\n';
		}
		else {
			if (dq.empty())
				cout << "-1";
			else
				cout << dq.back();
			cout << '\n';

		}
	}
	return 0;
}

// STL deque을 사용하지 않고 배열로 구현한 코드
#include <iostream>
#include <string>
using namespace std;
const int DEQUE_SIZE = 20000; // 명령의 수는 최대 10000이므로 스택 크기를 10000으로 준다.

struct Deque {
	int data[DEQUE_SIZE];
	int size = 0;
	int frontIndex = 0;
	int backIndex = 0;

	Deque() {
		size = 0;
		frontIndex = 10000;
		backIndex = 9999;
	}
	void push_front(int num) {
		data[--frontIndex] = num;
		size += 1;
	}
	void push_back(int num) {
		data[++backIndex] = num;
		size += 1;
	}
	int empty() {
		if (size == 0)
			return 1;
		else
			return 0;
	}
	int pop_front() {
		if (empty())
			return -1;
		else {
			size -= 1;
			return data[frontIndex++];
		}
	}
	int pop_back() {
		if (empty())
			return -1;
		else {
			size -= 1;
			return data[backIndex--];
		}
	}
	int front() {
		if (empty())
			return -1;
		else
			return data[frontIndex];
	}
	int back() {
		if (empty())
			return -1;
		else
			return data[backIndex];
	}
};

int main() {
	int N, x;
	cin >> N;
	Deque dq;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (str == "push_front") {
			cin >> x;
			dq.push_front(x);
		}
		else if (str == "push_back") {
			cin >> x;
			dq.push_back(x);
		}
		else if (str == "pop_front") {
			if (dq.empty())
				cout << "-1";
			else {
				cout << dq.front();
				dq.pop_front();
			}
			cout << '\n';
		}
		else if (str == "pop_back") {
			if (dq.empty())
				cout << "-1";
			else {
				cout << dq.back();
				dq.pop_back();
			}
			cout << '\n';
		}
		else if (str == "size") {
			cout << dq.size << '\n';
		}
		else if (str == "empty") {
			cout << dq.empty() << '\n';
		}
		else if (str == "front") {
			if (dq.empty())
				cout << "-1";
			else
				cout << dq.front();
			cout << '\n';
		}
		else {
			if (dq.empty())
				cout << "-1";
			else
				cout << dq.back();
			cout << '\n';
		}
	}
	return 0;
}