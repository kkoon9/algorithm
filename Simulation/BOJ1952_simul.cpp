#include <iostream>
#include <string>
using namespace std;

int main() {
	int M, N;
	int result = 0;
	cin >> M >> N;
	if (M > N) {
		result++;
		result += (N - 1) * 2;
	}
	else
		result += (M - 1) * 2;
	
	if (M == 1 || N == 1)
		result = 0;
	cout << result << endl;
	
	return 0;
}