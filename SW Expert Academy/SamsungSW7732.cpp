#include<iostream>
#include<string>
using namespace std;
#define SIZE 10
int TimeInt(char a, char b) {
	int ten = (a - '0') * 10;
	int one = (b - '0');
	return ten + one;
}
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	int hour = 23, min = 60, sec = 60;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string answer, pre_time, pro_time;
		bool flag = true; // false면 현재 - 약속, true면 약속 - 현재
		int pre_time_int[3], pro_time_int[3];
		int answer_int[3];
		cin >> pre_time >> pro_time;
		for (int i = 0; i < 3; i++) {
			int bmp1, bmp2;
			bmp1 = TimeInt(pre_time[i*3], pre_time[i*3 + 1]);
			pre_time_int[i] = bmp1;
			bmp2 = TimeInt(pro_time[i*3], pro_time[i*3 + 1]);
			pro_time_int[i] = bmp2;

			answer_int[i] = pro_time_int[i] - pre_time_int[i];
		}
		for (int i = 2; i > 0; i--) {
			if (answer_int[i] < 0) {
				answer_int[i] += 60;
				answer_int[i-1]--;
			}
		}
		if (answer_int[0] < 0)
			answer_int[0] += 24;

		for (int i = 0; i < 3; i++) {
			if (answer_int[i] < 10) 
				answer += "0";
			answer += to_string(answer_int[i]);
			if(i !=2) answer += ":";
		}
		
		cout << '#' << test_case << ' ' << answer << '\n';
	}
	return 0;
}