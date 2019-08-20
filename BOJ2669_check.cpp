#include <iostream>
using namespace std;
const int SIZE = 100 + 1;
bool check[SIZE][SIZE];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int sum = 0;
	for (int i = 0;i < 4;i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int x = x1; x < x2;x++) 
			for (int y = y1; y < y2;y++) 
				check[x][y] = true;		
	}
	for (int x = 1;x < SIZE;x++) 
		for (int y = 1; y < SIZE;y++) 
			sum += check[x][y];
	cout << sum << endl;
	return 0;
}