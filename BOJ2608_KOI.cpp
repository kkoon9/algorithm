#include <iostream>
#include <string>
using namespace std;
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

int strNum(string str1);
void numStr(int res);
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str1, str2, resStr;
	int res, st1=0, st2 = 0;
	cin >> str1 >> str2;
	st1 = strNum(str1);
	st2 = strNum(str2);
	res = st1 + st2;
	cout << res << endl;
	numStr(res);
	return 0;
	
}
void numStr(int res) {
	for (int i = 0;i < res / M;i++) {
		cout << 'M';
	}
	res %= M;
	if (res / C == 9) 
		cout << "CM";	
	else if (res / C == 4)
		cout << "CD";
	else if (res / C >= 5) {
		cout << 'D';
		res -= D;
		for (int i = 0;i < res / C;i++)
			cout << 'C';
	}
	else {
		for (int i = 0;i < res / C;i++)
			cout << 'C';
	}
	res %= C;
	if (res / X == 9)
		cout << "XC";
	else if (res / X == 4)
		cout << "XL";
	else if (res / X >= 5) {
		cout << 'L';
		res -= L;
		for (int i = 0;i < res / X;i++)
			cout << 'X';
	}
	else {
		for (int i = 0;i < res / X;i++)
			cout << 'X';
	}
	res %= X;
	if (res == 9)
		cout << "IX";
	else if (res == 4)
		cout << "IV";
	else if (res >= 5) {
		cout << 'V';
		res -= V;
		for (int i = 0;i < res;i++)
			cout << 'I';
	}
	else {
		for (int i = 0;i < res;i++)
			cout << 'I';
	}
}
int strNum(string str1) {
	int st1 = 0;
	for (int i = 0;i < str1.size();i++) {
		if (str1[i] == 'M') {
			st1 += M;
		}
		else if (str1[i] == 'D') {
			st1 += D;
		}
		else if (str1[i] == 'C') {
			if (i < str1.size() - 1) {
				if (str1[i + 1] == 'D') {
					st1 += (D - C);
					i += 1;
				}
				else if (str1[i + 1] == 'M') {
					st1 += (M - C);
					i += 1;
				}
				else {
					st1 += C;
				}
			}
			else
				st1 += C;
		}
		else if (str1[i] == 'L') {
			st1 += L;
		}
		else if (str1[i] == 'X') {
			if (i < str1.size() - 1) {
				if (str1[i + 1] == 'C') {
					st1 += (C - X);
					i += 1;
				}
				else if (str1[i + 1] == 'L') {
					st1 += (L - X);
					i += 1;
				}
				else {
					st1 += X;
				}
			}
			else
				st1 += X;
		}
		else if (str1[i] == 'V') {
			st1 += V;
		}
		else if(str1[i] == 'I'){
			if (i < str1.size() - 1) {
				if (str1[i + 1] == 'X') {
					st1 += (X - I);
					i += 1;
				}
				else if (str1[i + 1] == 'V') {
					st1 += (V - I);
					i += 1;
				}
				else {
					st1 += I;
				}
			}
			else
				st1 += I;
		}
	}
	return st1;
}