#include <iostream>
#include <set>
#include <functional>
using namespace std;

int main() {
	set<int> s;
	int n1, n2, x;
	scanf("%d ", &n1);
	while (n1--) {
		scanf("%d", &x);
		s.insert(x);
	}
	scanf("%d ", &n2);
	while (n2--) {
		scanf("%d", &x);
		printf("%d ",s.count(x));
	}
	return 0;
}
