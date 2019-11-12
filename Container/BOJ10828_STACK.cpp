// STL stack으로 구현한 소스코드
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int N,x;
	cin >> N;
	stack<int> st;
	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == "push") {
			cin >> x;
			st.push(x);
		}
		else if (input == "pop") {
			if (st.empty())
				cout << "-1";
			else {
				cout << st.top();
				st.pop();
			}
			cout << '\n';
		}
		else if (input == "size") {
			cout << st.size() << '\n';
		}
		else if (input == "empty") {
			if (st.empty())
				cout << "1";
			else
				cout << "0";
			cout << '\n';
		}
		else {
			if (st.empty())
				cout << "-1";
			else
				cout << st.top();
			cout << '\n';
		}
	}
	return 0;
}

// STL stack을 사용하지 않고 vector로 구현한 소스코드
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int N, x;
	cin >> N;
	vector<int> v;
	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == "push") {
			cin >> x;
			v.push_back(x);
		}
		else if (input == "pop") {
			if (v.empty())
				cout << "-1";
			else {
				cout << v.back();
				v.pop_back();
			}
			cout << '\n';
		}
		else if (input == "size") {
			cout << v.size() << '\n';
		}
		else if (input == "empty") {
			if (v.empty())
				cout << "1";
			else
				cout << "0";
			cout << '\n';
		}
		else {
			if (v.empty())
				cout << "-1";
			else
				cout << v.back();
			cout << '\n';
		}
	}
	return 0;
}

// STL stack을 사용하지 않고 배열로 구현한 코드
#include <iostream>
#include <string>
using namespace std;
const int STACK_SIZE = 10000; // 명령의 수는 최대 10000이므로 스택 크기를 10000으로 준다.

struct Stack {
	int data[STACK_SIZE];
	int size = 0;

	Stack() {
		size = 0;
	}
	void push(int num) {
		data[size] = num;
		size += 1;
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
			return data[size];
		}
	}
	int top() {
		if (empty())
			return -1;
		else 
			return data[size - 1];
	}
};

int main() {
	int N, x;
	cin >> N;
	Stack s;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			cin >> x;
			s.push(x);
		}
		else if (str == "pop") {
			if (s.empty())
				cout << "-1";
			else {
				cout << s.top();
				s.pop();
			}
			cout << '\n';
		}
		else if (str == "size") {
			cout << s.size << '\n';
		}
		else if (str == "empty") {
			cout << s.empty() << '\n';
		}
		else if (str == "top") {
			if (s.empty())
				cout << "-1";
			else 
				cout << s.top();
			cout << '\n';
		}
	}
	return 0;
}
