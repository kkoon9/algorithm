#include <iostream>
using namespace std;

const int MAX = 45 + 1;
int main(void) {
	int n;
	int Fibo[MAX] = { 0, 1 };

	cin >> n;
	for (int i = 2; i <= n; i++)
		Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
	
	cout << Fibo[n] << endl;
	return 0;
}