#include <iostream>

using namespace std;
const int SIZE = 5;
int table[SIZE][SIZE];

bool Bingo();
void solve(int d);
int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(0);


	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			cin >> table[i][j];
	}

	int sol = 0;
	for (int i = 0; i < SIZE * SIZE; i++) {
		int val; 
		cin >> val;
		solve(val);
		if (Bingo()) {
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}

void solve(int d) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			if (d == table[i][j]) {
				table[i][j] = 0;
				break;
			}
	}
}

bool Bingo() {
	// row
	int count = 0;
	for (int i = 0; i < SIZE;i++) {
		int val = 0;

		for (int j = 0; j < SIZE; j++) {
			val += table[i][j];
		}

		if (val == 0) {
			count++;
		}
	}

	for (int i = 0; i < SIZE;i++) {
		int val = 0;
		for (int j = 0; j < SIZE; j++)
			val += table[j][i];
		if (val == 0)
			count++;
	}

	int val = 0;
	for (int i = 0; i < SIZE;i++) 
		val += table[i][i];
	if (val == 0)
		count++;
	

	val = 0;
	for (int i = 0; i < SIZE;i++) 
		val += table[0 + i][SIZE - 1 - i];
	if (val == 0)
		count++;

	if (count >= 3)
		return true;
	return false;
}