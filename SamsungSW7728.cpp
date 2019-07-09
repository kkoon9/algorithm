#include<iostream>
#include<string>
using namespace std;
#define SIZE 10
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		bool check[SIZE];
		for (int i = 0; i < SIZE; i++)
			check[i] = false;
		int answer = 0;
		string input;
		cin >> input;
		int str_size = input.size();
		for (int i = 0; i < str_size; i++) {
			int idx = input[i] - '0';
			check[idx] = true;
		}
		for (int i = 0; i < SIZE; i++)
			if (check[i])answer++;

		cout << '#' << test_case << ' ' << answer << '\n';
	}
	return 0;
}