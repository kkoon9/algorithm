#include <iostream>
using namespace std;
const int ROUND = 10;
int main() {
	int A[ROUND], B[ROUND];
	int Awin = 0, Bwin = 0;
	for (int i = 0;i < ROUND;i++)
		cin >> A[i];
	for (int i = 0;i < ROUND;i++)
		cin >> B[i];
	for (int i = 0;i < ROUND;i++) {
		if (A[i] > B[i])Awin++;
		else if (A[i] < B[i])Bwin++;
	}
	if (Awin > Bwin) 
		cout << "A\n";
	else if (Awin < Bwin)
		cout << "B\n";
	else
		cout << "D\n";
	return 0;
}