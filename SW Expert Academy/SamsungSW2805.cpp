#include <iostream>
#include <string>
#include <list>
using namespace std;

int CharToInt(char a) {
	return a - '0';
}
int main(void) {
	int t;
	cin >> t;
	for (int test_case = 1; test_case <= t; test_case++) {
		int N;
		cin >> N;
		list<int> li;
		li.push_back(N / 2);
		int result = 0;
		string str;
		for (int i = 0; i < N; i++) {
			cin >> str;
			for (auto it = li.begin(); it != li.end(); it++)
				result += CharToInt(str[*it]);
			if (i < N / 2) {
				li.push_back(N / 2 - (i + 1));
				li.push_back(N / 2 + (i + 1));
			}
			else {
				if (!li.empty())
					li.pop_back();
				if (!li.empty())
					li.pop_back();
			}
		}
		cout << "#" << test_case << " " << result << '\n';
	}
}