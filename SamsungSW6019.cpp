#include<iostream>
using namespace std;
int main(int argc, char** argv) {
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		int D;
		double A, B, F;
		cin >> D >> A >> B >> F;
		double N = D / (A + B);
		double result = N * F;
		printf("#%d %.6f\n", test_case, result);
	}
	return 0;
}