#include <iostream>
using namespace std;
const int MAX = 1000001;

void Erasto(bool check[]);
void result(bool check[], int m, int n);

int main() {
	bool check[MAX];
	int m, n;
	Erasto(check);
	cin >> m >> n;
	result(check, m, n);
	return 0;
}

void result(bool check[], int m, int n) {
	for (int i = m; i <= n; i++)
		if (check[i] == false)
			cout << i << '\n';
}

void Erasto(bool check[]) {
	check[0] = check[1] = true;
	for (int i = 2; i*i < MAX; i++) {
		if (check[i] == false)
			for (int j = i + i; j < MAX; j += i)
				check[j] = true;
	}
}
