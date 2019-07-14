// 1번째 접근
#include <iostream>
#include <string>
#include <stack>
using namespace std;
long long square(int a) {
	long long result = 1;
	for (int i = 0; i < a; i++)
		result *= 2;
	return result;
}
int main() {
	string s;
	cin >> s;
	int size = s.size();
	stack<int> st;
	int j = 0;
	int output = 0;
	for (int i = size - 1; i >= 0; i--) {
		int x = s[i] - '0';
		output += x * square(j++);
		if (j == 3) {
			st.push(output);
			j = 0;
			output = 0;
		}
	}
	if(j!=0)
		st.push(output);
	while (!st.empty()) {
		int x = st.top();
		st.pop();
		printf("%d", x);
	}
	cout << '\n';
	return 0;
}

// 더 나은 코드
#include <iostream>
#include <string>
using namespace std;

void print(string s, int n);

int main() {
	string s;
	cin >> s;
	int n = s.size();
	print(s, n);
	return 0;
}

void print(string s, int n) {
	if (n % 3 == 1)
		cout << s[0];
	else if (n % 3 == 2)
		cout << (s[0] - '0') * 2 + (s[1] - '0');
	for (int i = n % 3; i<n; i += 3)
		cout << (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0');

	cout << '\n';
}