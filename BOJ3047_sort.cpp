#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

const int SIZE = 3;
const int MIN = 101;
const int MAX = 0;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector <int> input(SIZE);
	string str;

	for (int i = 0;i < SIZE;i++)
		cin >> input[i];
	sort(input.begin(), input.end());
	
	cin >> str;
	for (int i = 0;i < SIZE;i++) {
		int x = str[i] - 'A';
		cout << input[x] << ' ';
	}
	cout << '\n';
	
	return 0;
}