#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long long n; /* input */
	const int m = 1000000;
	const int p = m / 10 * 15; /* 주기 */
	
	int* Fibo = NULL;

	scanf("%lld", &n);

	Fibo = (int*)malloc(sizeof(int) * p);
	Fibo[0] = 0;
	Fibo[1] = 1;

	for (int i = 2; i < p; i++) {
		Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
		Fibo[i] %= m;
	}

	printf("%d\n", Fibo[n % p]);
	free(Fibo);
	return 0;
}