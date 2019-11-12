#include <iostream>
using namespace std;
const int STD = 2014;
const int TEN = 10;
const int TWE = 12;
const int gan[TEN] = { 0,1,2,3,4,5,6,7,8,9 };
const char ji[TWE] = { 'A','B','C','D','E','F', 'G','H','I','J','K','L' };
int main() {
	int N, t;
	char g;
	cin >> N;
	cout << ji[((N + 8) % TWE)] << gan[(N + 6) % TEN] << endl;
	return 0;
}