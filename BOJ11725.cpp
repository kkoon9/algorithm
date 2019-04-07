// 첫 번째 접근 코드
#include <iostream>
using namespace std;
int a[100001];
bool check[100001];
int main() {
	int n;
	cin >> n;
	check[1] = true;
	for (int i = 1; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (check[x])
			a[y] = x;
		else if (check[y])
			a[x] = y;
		else {
			a[x] = y;
			a[y] = x;
			continue;
		}
		check[x] = true;
		check[y] = true;
	}
	for (int i = 2; i <= n; i++) 
		cout << a[i] << '\n';
	
	return 0;
}