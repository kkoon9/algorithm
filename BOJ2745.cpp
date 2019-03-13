#include <iostream>
#include <string>
using namespace std;
long long square(int a, int b) {
	long long result = 1;
	for (int i = 0; i < a; i++) 
		result *= b;
	return result;
}
int main() {
	string N; // input
	int B; // base
	long long output = 0;
	cin >> N >> B;
	int size = N.size();
	for (int i = size - 1, j = 0; i >= 0; i--, j++) {
		int x = N[i];
		if (x >= 65)
			x -= 55;
		else 
			x -= '0';
 		output += square(j, B) * x;
	}
	cout << output << '\n';
	return 0;
}