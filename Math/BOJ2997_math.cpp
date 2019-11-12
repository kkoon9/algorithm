#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int SIZE = 3;
int main() {
	vector <int> arr(SIZE);
	int ans;
	for (int i = 0;i < SIZE;i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	int d1 = arr[1] - arr[0];
	int d2 = arr[2] - arr[1];
	if (d1 == d2)
		ans = arr[2] + d2;
	else if (d1 > d2)
		ans = arr[0] + d2;
	else 
		ans = arr[1] + d1;
	cout << ans << endl;
	return 0;
}
