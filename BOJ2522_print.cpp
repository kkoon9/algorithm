#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int x = N - i;
		for (int j = 0;j < x;j++) {
			cout << ' ';
		}
		for(int j=0;j<i;j++)
			cout << "*";
		cout << '\n';
	}
	for (int i = N - 1; i > 0; i--) {
		int x = N - i;
		for (int j = 0;j < x;j++) {
			cout << ' ';
		}
		for (int j = 0;j < i;j++)
			cout << "*";
		cout << '\n';
	}
	return 0;
}