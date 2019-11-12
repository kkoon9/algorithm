#include <iostream>
using namespace std;

int Sugar(int N);

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; // 배달해야 할 설탕 무게
	cin >> N;

	cout << Sugar(N) << endl;
	return 0;

}

int Sugar(int N){
	int count = 0;
	if (N % 5 == 0 || N % 5 == 3) {
		count += N / 5;
		N %= 5;
		count += N / 3;
	}
	else if (N % 5 == 1) {
		count += N / 5 - 1;
		N = N % 5 + 5;
		count += N / 3;
	}
	else if (N % 5 == 2) {
		if (N == 7) {
			count = -1;
			
		}
		else
			count += (N - 12) / 5 + 4;
	}
	else { //N % 5 == 4 
		if (N == 4) {
			count = -1;
		}
		else
			count += (N - 9) / 5 + 3;
	}
	return count;
}
