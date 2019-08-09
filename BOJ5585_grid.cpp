#include <iostream>
using namespace std;

const int COUNT = 6;
const int arr[COUNT] = { 500,100,50,10,5,1 };

int main() {
	int N,count = 0;
	cin >> N;
	N = 1000 - N;
	for (int i = 0;i < COUNT;i++) {
		while (N >= arr[i]) {
			count++;
			N -= arr[i];
		}
	}
	cout << count << endl;
	return 0;
}
