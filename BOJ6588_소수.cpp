#include <iostream>
using namespace std;
const int MAX = 1000000;
bool check[MAX + 1]; 
int prime[MAX / 2];
int main() {
	int pn = 0;
	check[0] = check[1] = true;
	for (int i = 2; i*i <= MAX; i++) {
		if (check[i] == false) {
			prime[pn++] = i;
			for (int j = i + i; j <= MAX; j += i)
				check[j] = true;
		}
	}
	int x;
	while (1) {
		scanf_s("%d", &x);
		int i, flag = 0;
		if (x == 0)
			break;
		for (i = 1; prime[i] <= x / 2; i++) {
			if (check[x - prime[i]] == false) {
				printf("%d = %d + %d\n", x, prime[i], x - prime[i]);
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}