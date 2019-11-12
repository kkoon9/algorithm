#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100 + 1;
bool memo[MAX];

void clear(bool memo[]);
int main() {
	int T, N;
	cin >> T;
	for (int test_case = 1;test_case <= T;test_case++) {
		int count = 0;
		cin >> N;
		clear(memo);
		for (int i = 2;i <= N;i++) {
			for (int j = i;j <= N;j += i)
				memo[j] = !memo[j];
		}
		for (int i = 1;i <= N;i++) {
			if (memo[i])
				count++;
		}
		cout << count << endl;
	}
	return 0;
}

void clear(bool memo[]) {
	for (int i = 0;i < MAX;i++)
		memo[i] = true;
}