// STL queue으로 구현한 소스코드
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	int N,x;
	cin >> N;
	queue<int> q;
	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == "push") {
			cin >> x;
			q.push(x);
		}
		else if (input == "pop") {
			if (q.empty())
				cout << "-1";
			else {
				cout << q.front();
				q.pop();
			}
			cout << '\n';
		}
		else if (input == "size") {
			cout << q.size() << '\n';
		}
		else if (input == "empty") {
			if (q.empty())
				cout << "1";
			else
				cout << "0";
			cout << '\n';
		}
		else if (input == "front") {
			if (q.empty())
				cout << "-1";
			else
				cout << q.front();
			cout << '\n';
		}
        else {
        	if (q.empty())
				cout << "-1";
			else
				cout << q.back();
			cout << '\n';
		    
        }
	}
	return 0;
}

// STL queue을 사용하지 않고 배열로 구현한 코드
#include <iostream>
#include <string>
using namespace std;
const int QUEUE_SIZE = 10000; // 명령의 수는 최대 10000이므로 스택 크기를 10000으로 준다.

struct Queue {
	int data[QUEUE_SIZE];
	int size = 0;
    int frontIndex = 0;
    int backIndex = 0;

	Queue() {
		size = 0;
        frontIndex = 0;
        backIndex = -1;
	}
	void push(int num) {
		data[backIndex + 1] = num;
		size += 1;
        backIndex += 1;
	}
	int empty() {
		if (size == 0) 
			return 1;
		else 
			return 0;
	}
	int pop() {
		if (empty()) 
			return -1;
		else {
			size -= 1;
			return data[frontIndex++];
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
	Queue q;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			cin >> x;
			q.push(x);
		}
		else if (str == "pop") {
			if (q.empty())
				cout << "-1";
			else {
				cout << q.front();
				q.pop();
			}
			cout << '\n';
		}
		else if (str == "size") {
			cout << q.size << '\n';
		}
		else if (str == "empty") {
			cout << q.empty() << '\n';
		}
		else if (str == "front") {
			if (q.empty())
				cout << "-1";
			else 
				cout << q.front();
			cout << '\n';
		}
        else {
            if (q.empty())
                cout << "-1";
            else
                cout << q.back();    
        }
	}
	return 0;
}