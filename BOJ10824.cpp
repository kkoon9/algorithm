#include <iostream>
#include <string>
using namespace std;
int main() {
	string A, B, C, D;
	cin >> A >> B >> C >> D;
	A.append(B);
	C.append(D);
	long long output = stoll(A) + stoll(C);
	cout << output << endl;
	return 0;
}