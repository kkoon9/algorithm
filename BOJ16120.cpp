#include<iostream>
#include <stack>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int flag = 1; // 1이면 PPAP 0이면 NP
	stack<char> st;
	int pCount = 0;
	int aCount = 0;
	string str;
	cin >> str;
	char x;
	int length = str.length(), i = 0;
	while (i < length) {
		x = str[i];
		if (x == 'A') {
			aCount++;
			if (!st.empty() && st.top() == 'A' || pCount < 2) {
				flag = 0; // A가 들어올 때 전에 들어왔던 게 A거나 P가 2개 이하일 때 NP
				break;
			}
		}

		else { // 입력값이 P일때
			if ((!st.empty() && st.top() == 'A') && pCount >= 2) {
				for (int i = 0; i < 3; i++)
					st.pop(); //PPAP 3번 pop P P A를 팝한다
				pCount -= 2;
				aCount -= 1;
			}
			pCount++;
		}
		st.push(x);
		i++;
	}
	if (flag == 0 || st.empty())
		cout << "NP\n";
	else if (st.top() == 'P' && st.size() == 1)
		cout << "PPAP\n";
	else
		cout << "NP\n";

	return 0;
}