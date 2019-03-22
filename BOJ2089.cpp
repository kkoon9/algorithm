#include <iostream>
using namespace std;
void base(int n) {
	if (n == 0)
		return;
	if (n % 2 == 0) {
		base(-(n / 2));
		cout << "0";
	}
	else {
		if (n > 0)
			base(-(n / 2));
		else 
			base((-n + 1) / 2);
		cout << "1";
	}
}
int main() {
	int N;
	cin >> N;
	if (N == 0)
		cout << "0";
	else 
		base(N);	
	cout << "\n";
	return 0;
}