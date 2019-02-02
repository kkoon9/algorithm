#include<iostream>

using namespace std;
long long square(int M, int N);
long long diff(long long a, long long b);
long long Counting(long long A);

int main(int argc, char** argv) {
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		long long a, b;
		cin >> a >> b;
		long long result;
		if ((a>0 && b>0) || (a<0 && b<0)) // 둘다 지상 또는 지하일 때
			result = diff(Counting(a), Counting(b));
		
		else
			result = Counting(a) + Counting(b) - 1;
		cout << "#" << test_case << " " << result << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

long long square(int M, int N) {
	long long m = 1;
	for (int i = 0; i < N; i++)
		m = m * M;
	return m;
}

long long diff(long long a, long long b) {
	if (a - b > 0)
		return a - b;
	else
		return b - a;
}

long long Counting(long long A) {
	if (A < 0) //[1]. 절대값으로 바꿔준다.
		A = -A;
	long long temp = A;
	long long sum = 0;
	int N = 0;
	while (temp != 0) { // [2]. 자리수를 구해준다.
		temp = temp / 10;
		N++;
	}
	while (N != 0) {
		long long x = A / square(10, N – 1); // x = 10^(N-1) 자릿수
		A = A % square(10, N – 1); 
		if (x > 4) // 4빼고 들어갈 수 있는 숫자 0, 1, 2, 3, 5, 6, 7, 8, 9 총 9개
			sum += (x - 1) * square(9, N – 1); // N-1 제곱해준다.
		else // 0, 1, 2 ,3
			sum += x * square(9, N - 1);
		N--;
	}
	return sum;
}