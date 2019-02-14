#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
	string input;
	cin >> input;
	list<char> editor(input.begin(), input.end());
	auto cursor = editor.end(); // iterator
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		char cmd;
		cin >> cmd;
		if (cmd == 'L' && cursor != editor.begin())
			--cursor;
		else if (cmd == 'D' && cursor != editor.end())
			++cursor;
		else if (cmd == 'B' && cursor != editor.begin()) {
			auto temp = cursor;
			--cursor;
			editor.erase(cursor);
			cursor = temp;
		}
		else if (cmd == 'P') {
			char x;
			cin >> x;
			editor.insert(cursor, x);
		}
	}
	for (char x : editor)
		cout << x;
	cout << '\n';
	return 0;
}