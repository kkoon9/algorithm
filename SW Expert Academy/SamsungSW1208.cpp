#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	for (int test_case = 1; test_case <= 10; test_case++) {
		int input[100];
		int n;
		cin >> n;
		for (int i = 0; i < 100; i++) 
			cin >> input[i];
		for (int i = 0; i < n; i++) {
			sort(input, input + 100);
			input[0]++;
			input[99]--;
		}
        sort(input, input + 100);
		cout << "#" << test_case << " "  << input[99] - input[0] << '\n';
	}
	return 0;
}