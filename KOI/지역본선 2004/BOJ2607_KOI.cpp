#include <iostream>
#include <string>
using namespace std;
const int ALPHA = 26;
int check[ALPHA];
int check2[ALPHA];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, strSz;
	int res = 0;
	string str, firstStr;
	cin >> N;
	cin >> firstStr;
	for (int i = 0;i < firstStr.size();i++)
		check[firstStr[i] - 'A']++;
	for (int i = 1;i < N;i++) {
		int change = 0;
		int changeCnt = 0;
		bool fail = false;
		cin >> str;
		strSz = str.size();
		for (int i = 0;i < strSz;i++) {
			check2[str[i] - 'A']++;
		}
		for (int i = 0;i < ALPHA;i++) {
			if (check[i] == check2[i])
				continue;
			else if (check[i] == check2[i] - 1) {
				change++;
				changeCnt++;
			}
			else if (check[i] == check2[i] + 1) {
				change--;
				changeCnt++;
			}
			else if (check[i] > check2[i]) {
				fail = true;
				break;
			}
			else if (check[i] < check2[i]) {
				fail = true;
				break;
			}
		}
		for (int i = 0;i < ALPHA;i++)
			check2[i] = 0;
		if (fail || changeCnt > 2 || change > 1 || change < -1) {
			continue;
		}
		res++;
	}
	cout << res << endl;
}