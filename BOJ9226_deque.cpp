#include <iostream>
#include <string>
#include <deque>
using namespace std;
const int SIZE = 5;
char arr[SIZE] = { 'a', 'e', 'i', 'o', 'u' };
int main() {
	string str;
	cin >> str;
	while (str != "#") {
		int flag = 0;
		int str_sz = str.size();
		deque <char> dq;
		for (int i = 0;i < str_sz;i++)
			dq.push_back(str[i]);
		for (int i = 0;i < str_sz;i++) {
			bool fg = false;
			for (int idx = 0;idx < SIZE;idx++) {
				if(dq[i] == arr[idx]){
					fg = true; // 모음이면 true 
					break;
				}
			}
			if (fg)
				break;		
			else {
				flag++;
			}
		}
		while (flag--) {
			dq.push_back(dq.front());
			dq.pop_front();
		}
		for (auto it = dq.begin(); it < dq.end();it++) 
			cout << *it;
		cout << "ay" << endl;
		cin >> str;
	}
	return 0;
}
