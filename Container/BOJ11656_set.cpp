#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
int main() {
	string s;
	cin >> s;
	set<string> st;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		char ch[1000];
		for (int j = i; j < len; j++) {
			ch[j - i] = s[j];
			if (j == len - 1)
				ch[j - i + 1] = '\0';
		}
		st.insert(ch);
	}
	for (string a : st)
		cout << a << endl;
	return 0;	
}