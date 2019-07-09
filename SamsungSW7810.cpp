#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		int fr, mid, en;
		int answer = 0;
		int input;
		vector<int> v;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> input;
			if (N <= input)answer++;
			v.push_back(input);
		}
		if (N == answer) {
			cout << '#' << test_case << ' ' << answer << '\n';
			continue;
		}
		sort(v.begin(), v.end());
		for (int i = N-1; i >= 0; i--) {
			int count = 0;
			fr = 1;
			en = N - 1;
			mid = (fr + en) / 2;
			while (fr < en) {
				if (v[mid] < i) {
					fr = mid + 1;
					mid = (fr + en) / 2;
				}
				else{
					count += en - mid + 1;
					en = mid - 1;
					mid = (fr + en) / 2;
				}
			}
			if (count == i) {
				answer = count;
				break;
			}
		}
		cout << '#' << test_case << ' ' << answer << '\n';
	}
	return 0;
}