#pragma warning(disable: 4996)
#include <iostream>
#include <vector>
using namespace std;
vector <int> dis;

int pow(int a, int P) {
	int result = 1;
	for (int i = 0; i < P; i++)
		result *= a;
	return result;
}

int D(int a,int P) {
	int tmp = a;
	int result = 0;
	while (tmp != 0) {
		result += pow(tmp % 10, P);
		tmp /= 10;
	}
	return result;
}
bool dfs(int node) { 
	bool flag = true;
	for (auto it = dis.begin(); it != dis.end(); it++) {
		if (node == *it) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	int A, P, count = 0;
	cin >> A >> P;
	dis.push_back(A);
	bool flag = true;
	while (flag) {
		A = D(A, P);
		flag = dfs(A);
		dis.push_back(A);
	}
	for (auto it = dis.begin(); it != dis.end(); it++) {
		if (A == *it)
			break;
		else
			count++;
	}
	cout << count << '\n';
	return 0;
}