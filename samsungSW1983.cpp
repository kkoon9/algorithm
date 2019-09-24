#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
struct Student{
	int number;
	float jumsu;
};
const int MAX = 100 + 1;

bool cmp(Student a, Student b);
int main() {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		int N, k;
		string ans;
		cin >> N >> k;
		int baesu = N / 10;
		Student arr[MAX];
		for (int i = 1;i <= N;i++) {
			int mid, fin, hw;
			arr[i].number = i;
			cin >> mid >> fin >> hw;
			arr[i].jumsu = mid * 0.35 + fin * 0.45 + hw * 0.2;
		}
		sort(arr + 1, arr + N + 1, cmp);
		for (int i = 1;i <= N;i++) {
			if (arr[i].number == k) {
				switch ((i-1)/baesu) {
				case 0:
					ans = "D0";
					break;
				case 1:
					ans = "C-";
					break;
				case 2:
					ans = "C0";
					break;
				case 3:
					ans = "C+";
					break;
				case 4:
					ans = "B-";
					break;
				case 5:
					ans = "B0";
					break;
				case 6:
					ans = "B+";
					break;
				case 7:
					ans = "A-";
					break;
				case 8:
					ans = "A0";
					break;
				case 9:
					ans = "A+";
					break;
				default:
					break;
				}
				cout << "#" << test_case << " " << ans << endl;
				break;
			}
		}
	}
	return 0;
}

bool cmp(Student a, Student b) {
	return a.jumsu < b.jumsu;
}