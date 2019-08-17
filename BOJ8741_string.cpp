#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string fr, ba;
	cin >> n;
	for (int i = 1;i < n;i++) {
		fr += "1";
		ba += "0";
	}
	cout << fr << "1" << ba << endl;
	return 0;
}
