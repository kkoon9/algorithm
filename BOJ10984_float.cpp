#include <iostream>
using namespace std;

int main() {
	int T, N, C;
	float G;
	cin >> T;
	for (int i = 0;i < T;i++) {
		cin >> N;
		int sum = 0;
		float GPA = 0;
		for (int j = 0;j < N;j++) {
			cin >> C >> G;
			sum += C;
			GPA += (G * C);
		}
		printf("%d %.1f\n", sum, GPA / sum);
	}
	return 0;
}