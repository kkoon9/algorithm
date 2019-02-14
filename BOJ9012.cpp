#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int N, x;
	cin >> N;
	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		bool flag = true; // YES : true, NO : false
		stack<char> st;
		int input_size = input.size();
		for (int it = 0; it < input_size; it++) {
			if (input[it] == '(')
				st.push('(');
			else {
				if (st.empty()) {
					flag = false;
					break;
				}
				else
					st.pop();
			}
		}
		if (!st.empty())
			flag = false;
		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}